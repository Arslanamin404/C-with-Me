// NAvbar
function menu() {
    let navItems = document.getElementById('navItems');
    navItems.classList.toggle('hidden');
}

// Questions Array of objects and inside each question create array of array of objects 
const questions = [
    {
        question: 'What is the best exercise for building strong biceps?',
        answers: [
            { text: 'Bench press', correct: false },
            { text: 'Deadlift', correct: false },
            { text: 'Bicep curl', correct: true },
            { text: 'Squat', correct: false }
        ]
    },
    {
        question: 'What is the primary muscle worked during a bench press?',
        answers: [
            { text: 'Back', correct: false },
            { text: 'Biceps', correct: false },
            { text: 'Chest', correct: false },
            { text: 'Triceps', correct: true }
        ]
    },
    {
        question: 'What is the recommended amount of rest between sets?',
        answers: [
            { text: '10 seconds', correct: false },
            { text: '30 seconds', correct: false },
            { text: '1 minute', correct: true },
            { text: '2 minutes', correct: false }
        ]
    },
    {
        question: 'What is the best way to prevent muscle soreness after a workout?',
        answers: [
            { text: 'Avoiding stretching', correct: false },
            { text: 'Drinking alcohol', correct: false },
            { text: 'Eating sugary foods', correct: false },
            { text: 'Stretching and doing a cool-down after the workout', correct: true }
        ]
    },
    {
        question: 'How many sets should you do during a workout?',
        answers: [
            { text: '1-2', correct: false },
            { text: '3-4', correct: true },
            { text: '5-6', correct: false },
            { text: '7-8', correct: false }
        ]
    },
    {
        question: 'What is the recommended amount of protein intake per day for bodybuilding?',
        answers: [
            { text: '0.5 grams per pound of body weight', correct: false },
            { text: '1 gram per pound of body weight', correct: true },
            { text: '2 grams per pound of body weight', correct: false },
            { text: 'There is no recommended amount', correct: false }
        ]
    },
    {
        question: 'What is the best way to target the upper chest muscles?',
        answers: [
            { text: 'Incline bench press', correct: true },
            { text: 'Flat bench press', correct: false },
            { text: 'Decline bench press', correct: false },
            { text: 'Push-ups', correct: false }
        ]
    },
    {
        question: 'What is the proper technique for performing a deadlift?',
        answers: [
            { text: 'Round your back and lift with your arms', correct: false },
            { text: 'Bend your knees as little as possible', correct: false },
            { text: 'Keep your back straight and lift with your legs', correct: true },
            { text: 'Hold your breath during the lift', correct: false }
        ]
    },
    {
        question: 'Which of the following is not a major muscle group?',
        answers: [
            { text: 'Biceps', correct: false },
            { text: 'Quadriceps', correct: false },
            { text: 'Triceps', correct: false },
            { text: 'Obliques', correct: true }
        ]
    },
    {
        question: 'Which exercise is best for building leg muscles?',
        answers: [
            { text: 'Leg press', correct: true },
            { text: 'Calf raise', correct: false },
            { text: 'Shoulder press', correct: false },
            { text: 'Dumbbell curl', correct: false }
        ]
    },
    {
        question: 'What is the best exercise for building a strong and defined back?',
        answers: [
            { text: 'Bicep curls', correct: false },
            { text: 'Deadlifts', correct: false },
            { text: 'Chest press', correct: false },
            { text: 'Pull-ups', correct: true }
        ]
    },
    {
        question: 'Which muscle is targeted when performing a shoulder press?',
        answers: [
            { text: 'Biceps', correct: false },
            { text: 'Triceps', correct: false },
            { text: 'Shoulders', correct: true },
            { text: 'Chest', correct: false }
        ]
    },
    {
        question: 'What is the best way to increase muscle mass and strength?',
        answers: [
            { text: 'High reps, low weight', correct: false },
            { text: 'Low reps, high weight', correct: true },
            { text: 'No reps, no weight', correct: false },
            { text: 'Moderate reps, moderate weight', correct: false }
        ]
    },
    {
        question: 'Which exercise is best for building abdominal muscles?',
        answers: [
            { text: 'Leg raises', correct: true },
            { text: 'Push-ups', correct: false },
            { text: 'Bench press', correct: false },
            { text: 'Squats', correct: false }
        ]
    },
    {
        question: 'What is the best way to increase endurance?',
        answers: [
            { text: 'Lifting heavy weights', correct: false },
            { text: 'Running sprints', correct: true },
            { text: 'Doing high-rep, low-weight exercises', correct: false },
            { text: 'Taking long breaks between sets', correct: false }
        ]
    },
    {
        question: 'What is the recommended amount of cardio per week for bodybuilding?',
        answers: [
            { text: '10-15 minutes', correct: false },
            { text: '20-30 minutes', correct: true },
            { text: '45-60 minutes', correct: false },
            { text: 'More than 60 minutes', correct: false }
        ]
    },
    {
        question: 'What is the best way to warm up before a workout?',
        answers: [
            { text: 'Static stretching', correct: false },
            { text: 'Dynamic stretching', correct: true },
            { text: 'No warm-up needed', correct: false },
            { text: 'Drinking coffee', correct: false }
        ]
    }
];


// LOGIC


const questionBox = document.getElementById('questionBox');
const answerButtons = document.getElementById('options');
const nextBtn = document.getElementById('nextBtn');


let currentQuestionIndex = 0;
let score = 0;


function startQuiz() {
    currentQuestionIndex = 0;
    score = 0;
    showQuestion();
}


function showQuestion() {
    resetState();
    let currentQuestion = questions[currentQuestionIndex];
    let questionNumber = currentQuestionIndex + 1;
    questionBox.innerText = `${questionNumber}. ${currentQuestion.question}`;

    currentQuestion.answers.forEach(answer => {
        const button = document.createElement('button');
        button.innerText = answer.text;
        button.classList.add('btn');
        answerButtons.appendChild(button);
        if (answer.correct) {
            button.dataset.correct = answer.correct;
        }
        button.addEventListener('click', selectAnswer);
    })
}


function selectAnswer(e) {
    const selectBtn = e.target;
    const isCorrect = selectBtn.dataset.correct === 'true';
    // These custom classes are created in input.css
    if (isCorrect) {
        selectBtn.classList.add('correct');
        score++;
    }
    else {
        selectBtn.classList.add('incorrect');
    }
    Array.from(answerButtons.children).forEach(button => {
        if (button.dataset.correct === 'true') {
            button.classList.add('correct');
        }
        button.disabled = true;
    });
    nextBtn.style.display = 'block';
}


function resetState() {
    nextBtn.style.display = 'none';
    while (answerButtons.firstChild) {
        answerButtons.removeChild(answerButtons.firstChild); //it will remove all the previous answers
    }
}

function showScore() {
    resetState();
    questionBox.innerHTML = `<div class = "w-full text-2xl bg-green-500 p-3 my-3"> You got ${score}  out of ${questions.length} questions correct! </div>
    <h1 class = 'text-3xl w-full bg-yellow-400 p-3 my-3'> You scored ${score} points. </h1>`;
    nextBtn.innerHTML = 'Play Again';
    nextBtn.style.display = 'block';
}

function handleNextBtn() {
    currentQuestionIndex++;
    if (currentQuestionIndex < questions.length) {
        showQuestion();
    }
    else {
        showScore();
    }
}

nextBtn.addEventListener('click', () => {
    if (currentQuestionIndex < questions.length) {
        handleNextBtn();
    }
    else {
        startQuiz();
    }
})
startQuiz();
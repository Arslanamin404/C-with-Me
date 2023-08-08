let password = document.getElementById('password');
let confirmPassword = document.getElementById('confirmPassword');
let toggleIcon = document.getElementById('toggleIcon');
let flag = 1;    //1-->no Error 0--> errors

const passwordErrorMessage = "<p>Confirm Password does not match</p>";
const emailUsernameErrorMessage = "<p>Email and username cannot contain space</p>"

//! this function is for show hide password
function toggle() {
    let type = password.getAttribute('type');
    if (type === 'password') {
        password.setAttribute('type', 'text');
        toggleIcon.src = "eye-off.svg"
        toggleIcon.alt = "hide password"
    }
    else {
        password.setAttribute('type', 'password');
        toggleIcon.src = "eye.svg"
        toggleIcon.alt = "show password"

    }
}

let errorAlert = document.getElementById('errorAlert');
let confirmPasswordIcon = document.getElementById('confirmPasswordIcon');


//! This function will check whiteSpaces
var pattern = /\s/g;    //regexp to check white spaces read documentation
function whiteSpaceCheck(data) {
    let isSpace = pattern.test(data);
    if (isSpace) {
        if (!errorAlert.innerHTML.includes(emailUsernameErrorMessage)) {
            errorAlert.innerHTML += emailUsernameErrorMessage;
        }
        flag = 0;
    }
    else {
        errorAlert.innerHTML = "";
        flag = 1;
    }
}


//! this function is for checking password === confirmPassword
function check(element) {
    // console.log(element);
    if (element.value.length > 0) {
        if (element.value != password.value) {
            if (!errorAlert.innerHTML.includes(passwordErrorMessage)) {
                errorAlert.innerHTML += passwordErrorMessage;
            }
            confirmPasswordIcon.classList.add('hidden');
            flag = 0;
        }
        else {
            errorAlert.innerHTML = "";  // Remove previous error message
            confirmPasswordIcon.classList.remove('hidden');
            flag = 1;
        }
    }
    else {
        errorAlert.innerHTML = "";  // Remove previous error message
        confirmPasswordIcon.classList.add('hidden');
        flag = 0;
    }
}


function passwordCheck(data) {
    var passwordCriteria = document.getElementsByClassName('password-check');

    // RegExp pattern will be found online
    const lowercase = new RegExp('(?=.*[a-z])'); // Check for at least one lowercase letter
    const uppercase = new RegExp('(?=.*[A-Z])'); // Check for at least one uppercase letter
    const numeric = new RegExp('(?=.*[0-9])');    // Check for at least one numeric digit
    const specialCharacter = new RegExp('(?=.*[!@#\$%\^&\*])'); // Check for at least one special character (!@#$%^&*)
    const eightChars = new RegExp("^(.{8,})$"); // Check for a minimum of 8 characters


    if (eightChars.test(data)) {
        passwordCriteria[0].classList.replace("text-gray-700", "text-green-800");
        flag = 1;
    }
     else {
        passwordCriteria[0].classList.replace("text-green-800", "text-gray-700");
        flag = 0;
    }

    if (lowercase.test(data)) {
        passwordCriteria[1].classList.replace("text-gray-700", "text-green-800");
        flag = 1;
    }
     else {
        passwordCriteria[1].classList.replace("text-green-800", "text-gray-700");
        flag = 0;
    }


    if (uppercase.test(data)) {
        passwordCriteria[2].classList.replace("text-gray-700", "text-green-800");
        flag = 1;
    }
     else {
        passwordCriteria[2].classList.replace("text-green-800", "text-gray-700");
        flag = 0;
    }


    if (numeric.test(data)) {
        passwordCriteria[3].classList.replace("text-gray-700", "text-green-800");
        flag = 1;
    }
     else {
        passwordCriteria[3].classList.replace("text-green-800", "text-gray-700");
        flag = 0;
    }

    if (specialCharacter.test(data)) {
        passwordCriteria[4].classList.replace("text-gray-700", "text-green-800");
        flag = 0;
    }
     else {
        passwordCriteria[4].classList.replace("text-green-800", "text-gray-700");
        flag = 0;
    }

}

//! this function will control form submission, if errors then form will not be submitted else it will be submitted successfully 
function validate() {
    if (flag == 1) {
        return true;
    }
    else {
        return false;
    }
}
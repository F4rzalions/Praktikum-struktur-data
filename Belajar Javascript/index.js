//document.getElementById("count-el").innerText = 5

let saveEl = document.getElementById("save-el")
let countEl = document.getElementById("count-el")
let count = 0;

function increment(){
    count++
    countEl.innerText = count
}

function decrement(){
    count--
    countEl.innerText = count
}

function save(){
    let countStr = count + " "
    saveEl.innerText += countStr
    countEl.textContent = 0
    count = 0
}

let errorP = document.getElementById("error-btn")
console.log(errorP)
 function error(){
    errorP.textContent = "Something Wrong, Please Try Again"
}

let num1 = 8
let num2 = 2

document.getElementById("num1-el").textContent = num1
document.getElementById("num2-el").textContent =num2

let add = document.getElementById("sum-el")
function tambah(){
    let hasil = num1 + num2
    add.textContent = "Hasil: " + hasil
}


//let FirstName = "Rizal"
//let LastName = " Rafarrel"

//let FullName = FirstName + LastName

//console.log(FullName)
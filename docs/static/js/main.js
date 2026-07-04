let card = document.getElementById("card")
let cardone = document.getElementById("cardone")
let cardtow = document.getElementById("cardtow")

card.addEventListener("click", (e) => {
    card.style.zIndex = "1";
    cardone.style.zIndex = "0";
    cardtow.style.zIndex = "0";
});

cardone.addEventListener('click', (e) => {
    card.style.zIndex = "1";
    cardone.style.zIndex = "2";
    cardtow.style.zIndex = "0";
});

cardtow.addEventListener('click', (e) => {
    card.style.zIndex = "1";
    cardone.style.zIndex = "0";
    cardtow.style.zIndex = "2";
});
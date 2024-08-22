var allItems = [];
function getPizza(){
    
    var xmlHttpRequest = new XMLHttpRequest();
    xmlHttpRequest.open("GET","https://forkify-api.herokuapp.com/api/search?q=pizza");
    xmlHttpRequest.send();

    xmlHttpRequest.addEventListener("readystatechange",function(){
        if(xmlHttpRequest.readyState==4){
            allItems = JSON.parse(xmlHttpRequest.response).recipes;
            console.log("pizza");
        }
    });   
}


function getOnion(){
    
    var xmlHttpRequest = new XMLHttpRequest();
    xmlHttpRequest.open("GET","https://forkify-api.herokuapp.com/api/search?q=onion");
    xmlHttpRequest.send();

    xmlHttpRequest.addEventListener("readystatechange",function(){
        if(xmlHttpRequest.readyState==4){
            allItems = JSON.parse(xmlHttpRequest.response).recipes;
            console.log("onion");
        }
    });   
}

getPizza();
getOnion()
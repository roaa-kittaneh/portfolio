const http= require ('http');
http.createServer((req,res)=>{
    const {url,method}=req;
   if(url=='/'&& method=='GET'){
    res.write("home page");
    res.end();
   }
   else if(url=='/about'&& method=='GET'){
    res.write("about page");
    res.end();
   }
   else if(url=='/user'&& method=='GET'){
    res.write("user page");
    res.end();
   }
   else if(url=='/login'&& method=='GET'){
    res.write(" login page");
    res.end();
   }
   else{
    res.write("not found");
    res.end();
   }

}).listen(4000,()=>{
    console.log("server is running");
});
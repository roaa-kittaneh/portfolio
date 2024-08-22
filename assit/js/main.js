const navbar = document.querySelector('.navbar');
const headercontentspan = document.querySelector('.header-content span');
const loading=document.querySelector('.loading');
const aboutsection=document.querySelector('.about');
const scrollToTopbtn=document.querySelector('.scroll-to-top');
const navLink=document.querySelectorAll('.nav-link');
window.addEventListener('scroll', function () {
  if (window.scrollY >= headercontentspan.offsetTop) {
    navbar.style.backgroundColor = '#fff'; // Fixed the typo here
  } else {
    navbar.style.backgroundColor = 'transparent'; // Fixed the typo here
  }

  if(window.scrollY>aboutsection.offsetTop){
    scrollToTopbtn.classList.remove('opacity-0', 'invisible')
  }
  else{
    scrollToTopbtn.classList.add('opacity-0', 'invisible')
  }
})

window.addEventListener('load', function(){
    setTimeout(function(){
        loading.classList.add('opacity-0','invisible')
       document.body.style.overflow='auto';
    },2000)
})

scrollToTopbtn.addEventListener('click', function(){
    window.scroll({
        top:0,
        behavior:"smooth"
    })
})

for(let i=0;i<navLink.length;i++){
    navLink[i].addEventListener('click',function(e){
        e.preventDefault()  // يمنع السلوك الافتراضي بحيث ما يعمل ريفرش كل ما اكبس على الناف بار
        for(let j=0;j<navLink;j++){
            navLink[i].classList.remove('.active')
        }
        let currentid=this.getAttribute('href')
        let targetsection=document.querySelector(currentid)
        window.scroll({
            top:targetsection.offsetTop,
            behavior:"smooth"
        })

    })
}
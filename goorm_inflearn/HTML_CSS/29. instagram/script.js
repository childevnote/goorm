const toggleThemeBtn = document.querySelector('.header-theme-button');

toggleThemeBtn.addEventListener('click',()=> {
    document.documentElement.classList.toggle('darkTheme');
})
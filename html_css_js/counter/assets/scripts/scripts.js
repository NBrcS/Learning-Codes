let count = 0;

const CURRENT = document.getElementById('current-number');

function increment()
{
    count++;    
    CURRENT.innerHTML = count
}

function decrement()
{
    count--;
    CURRENT.innerHTML = count;
}
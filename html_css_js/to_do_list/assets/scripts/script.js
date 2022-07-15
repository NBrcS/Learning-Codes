const LIST = document.getElementById("item-list-form");
const SUBMIT_BUTTON = document.getElementById("new-item-button");

function add()
{
    console.log("init");


    const content = document.getElementById("new-item-input");
    if(!content)
    {
        alert("Please, add a task on the text box");
        console.log(content);
        return;
    }
    console.log(content);

    LIST.appendChild( ( ) => {
        let item = document.createElement("div");

        // Adding the checkbox
        item.appendChild( ( ) =>{
            let checkbox = document.createElement("div");
            checkbox.setAttribute("class", "checkbox");

            checkbox.appendChild( ( ) =>{
                let checkInput = createElement("input");
                checkInput.setAttribute("type", "checkbox");

                return checkInput;
            });

            return checkbox;
        });

        //Adding the content
        item.appendChild( ( )=>{
            let content_div = document.createElement("div");
            content_div.setAttribute("class", "content");

            content_div.appendChild( ( ) => {
                let text = document.createElement("input");
                text.setAttribute("type", "text");
                text.setAttribute("class", "text");
                text.setAttribute("value", content);

                return text;
            });

            return content;
        });

        //Adding the buttons
        item.appendChild( ( ) =>{
            let buttons = document.createElement("div");

            buttons.appendChild( ( ) =>{
                let edit = document.createElement("button");
                edit.setAttribute("class", "edit");
                edit.setAttribute("content", "Edit");

                return edit;
            });
            buttons.appendChild( ( ) =>{
                let remove = document.createElement("button");
                edit.setAttribute("class", "remove");
                edit.setAttribute("content", "Remove");    
    
                return remove;
            });

            return buttons;
        });        
    
        return item;
    });
}

SUBMIT_BUTTON.addEventListener("click", add());




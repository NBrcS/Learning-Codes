window.addEventListener('load', () => {
    const form = document.querySelector("#new-item-form") as HTMLFormElement;
    const input = document.querySelector("#new-item-input") as HTMLInputElement;
    const list_element = document.querySelector("#item-list-form") as HTMLTableSectionElement;

    form.addEventListener('submit', (e) => {
        e.preventDefault();

        const content: string = input.value;
        if(!content){
            alert("Please, add a task in th text box");
            return;
        }
        console.log(typeof content);

        const item_element = document.createElement('div');
        item_element.classList.add("item");

        const checkbox = document.createElement('div');
        checkbox.classList.add("checkbox");
        const check_input = document.createElement('input');
        check_input.type = "checkbox";
        checkbox.appendChild(check_input);

        const item_content = document.createElement('div');
        item_content.classList.add("content");
        const item_content_input = document.createElement('input');
        item_content_input.type = "text";
        item_content_input.className = "text";
        item_content_input.readOnly = true;
        item_content_input.value = content;
        item_content.appendChild(item_content_input);

        const buttons_div = document.createElement('div');
        buttons_div.className = "buttons";
        const button_edit = document.createElement('button');
        button_edit.className = "edit";
        button_edit.innerHTML = "Edit";
        buttons_div.appendChild(button_edit);

        const button_remove = document.createElement('button');
        button_remove.className = "remove";
        button_remove.innerHTML = "Remove";
        buttons_div.appendChild(button_remove);

        item_element.appendChild(checkbox);
        item_element.appendChild(item_content);
        item_element.appendChild(buttons_div);

        list_element.appendChild(item_element);

        input.value = '';

        button_edit.addEventListener("click", () => {
            if(button_edit.innerText.toLowerCase() == 'edit'){
                item_content_input.removeAttribute('readonly');
                item_content_input.focus();
                button_edit.innerText = 'Save';
            }
            else{
                item_content_input.readOnly = true;
                button_edit.innerText = 'Edit';
            }


        });

        button_remove.addEventListener('click', () => {
            list_element.removeChild(item_element);
        })
    });
});


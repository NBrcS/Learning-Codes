// Um desenvolvedor tentou criar um projeto que consome a base de dados de filme do TMDB para criar um organizador de filmes, mas desistiu 
// pois considerou o seu código inviável. Você consegue usar typescript para organizar esse código e a partir daí aprimorar o que foi feito?

// A ideia dessa atividade é criar um aplicativo que: 
//    - Busca filmes
//    - Apresenta uma lista com os resultados pesquisados
//    - Permite a criação de listas de filmes e a posterior adição de filmes nela

// Todas as requisições necessárias para as atividades acima já estão prontas, mas a implementação delas ficou pela metade (não vou dar tudo de graça).
// Atenção para o listener do botão login-button que devolve o sessionID do usuário
// É necessário fazer um cadastro no https://www.themoviedb.org/ e seguir a documentação do site para entender como gera uma API key https://developers.themoviedb.org/3/getting-started/introduction


var apiKey: string = '3f301be7381a03ad8d352314dcc3ec1d';
let requestToken: string;
let username: string;
let password: string;
let sessionId: string;
let listId: string = '7101979';

let loginButton = document.getElementById('login-button') as HTMLButtonElement;
let searchButton = document.getElementById('search-button')!;
let searchContainer = document.getElementById('search-container') as HTMLDivElement;
let mainContainer = document.getElementById('main-container') as HTMLDivElement;
let alternateLiLayout = 'li-left';

loginButton.addEventListener('click', async () => {
  await criarRequestToken();
  await logar();
  await criarSessao();
})

searchButton.addEventListener('click', async () => {
	let lista = document.getElementById("lista")!;
	if (lista) {
		lista.outerHTML = "";
	}

	let query = document.getElementById('search') as HTMLInputElement;
	let listaDeFilmes = await procurarFilme(query.value);
	let ul = document.createElement('ul');
	ul.id = "lista";

	for (const item of listaDeFilmes.results) {
		let li = document.createElement('li');
		let img = document.createElement('img');

		li.setAttribute("class", alternateLiLayout);
		if(alternateLiLayout === 'li-left'){
			if(!item.poster_path){
				console.log(`${item.original_title}'s poster not found`);
			}
			else{
				let src = `https://image.tmdb.org/t/p/w500${item.poster_path}`
				img.setAttribute("src", src);
				img.setAttribute("alt", "movie poster");
				li.appendChild(img);
			}
			
			let content = document.createElement('div');
			let title = document.createElement('h6');
			let synopsis = document.createElement('p');

			content.setAttribute("class", "content-container");
			title.setAttribute("class", "content-title");
			synopsis.setAttribute("class", "content-synopsis");

			title.innerHTML = String(item.original_title);
			synopsis.innerHTML = String(item.overview);

			content.appendChild(title);
			content.appendChild(synopsis);

			li.appendChild(content);

			alternateLiLayout = 'li-right';
		} 
		else {
			
			let content = document.createElement('div');
			let title = document.createElement('h6');
			let synopsis = document.createElement('p');

			content.setAttribute("class", "content-container");
			title.setAttribute("class", "content-title");
			synopsis.setAttribute("class", "content-synopsis");

			title.innerHTML = String(item.original_title);
			synopsis.innerHTML = String(item.overview);

			content.appendChild(title);
			content.appendChild(synopsis);

			li.appendChild(content);

			if(!item.poster_path){
				console.log(`${item.original_title}'s poster not found`);
			}
			else{
				let src = `https://image.tmdb.org/t/p/w500${item.poster_path}`
				img.setAttribute("src", src);
				img.setAttribute("alt", "movie poster");
				li.appendChild(img);
			}

			alternateLiLayout = 'li-left';
		}

		ul.appendChild(li);
	}

	console.log(listaDeFilmes);
	mainContainer.appendChild(ul);
});

function createMovieText(title: string, synopsis: string){

}

function preencherSenha() {
    let pass = document.getElementById('senha') as HTMLInputElement;

	if(!pass){
		console.log("error in the password box");
		return;
	}

    password = pass.value;
    validateLoginButton();
}

function preencherLogin() {
    let user = document.getElementById('login') as HTMLInputElement;

	if(!user){
		console.log("error in the username box");
		return;
	}
	
    username =  user.value;
    validateLoginButton();
}

function preencherApi() {
	let api = document.getElementById('api-key') as HTMLInputElement;

	if(!api){
		console.log("error in the api box");
		return;
	}

	apiKey = api.value;
	validateLoginButton();
}

function validateLoginButton() {
  if (password && username && apiKey) {
    loginButton.disabled = false;
  } else {
    loginButton.disabled = true;
  }
}

class HttpClient {
	constructor(){}

  static async get(url: string, method: string, body = {}) {
    return new Promise((resolve, reject) => {
      let request = new XMLHttpRequest();
      request.open(method, url, true);

      request.onload = () => {
        if (request.status >= 200 && request.status < 300) {
          resolve(JSON.parse(request.response));
        } else {
          reject({
            status: request.status,
            statusText: request.statusText
          })
        }
      }
      request.onerror = () => {
        reject({
          status: request.status,
          statusText: request.statusText
        })
      }

      if (body) {
        request.setRequestHeader("Content-Type", "application/json;charset=UTF-8");
        body = JSON.stringify(body);
      }
      request.send(Object(body));
    });
  }
}

async function procurarFilme(query: string) {
  query = encodeURI(query)
  console.log(query)
  let result = await HttpClient.get(
    `https://api.themoviedb.org/3/search/movie?api_key=${apiKey}&query=${query}`,
    "GET"
  );
  return result;
}

async function adicionarFilme(filmeId: string) {
  let result = await HttpClient.get(
    `https://api.themoviedb.org/3/movie/${filmeId}?api_key=${apiKey}&language=en-US`,
    "GET"
  )
  console.log(result);
}

async function criarRequestToken () {
  let result = await HttpClient.get(
    `https://api.themoviedb.org/3/authentication/token/new?api_key=${apiKey}`,
    "GET"
  )
  requestToken = Object(result).request_token;
}

async function logar() {
  await HttpClient.get(
    `https://api.themoviedb.org/3/authentication/token/validate_with_login?api_key=${apiKey}`,
    "POST",
    {
      username: `${username}`,
      password: `${password}`,
      request_token: `${requestToken}`
    }
  );
}

async function criarSessao() {
  let result = await HttpClient.get(
    `https://api.themoviedb.org/3/authentication/session/new?api_key=${apiKey}&request_token=${requestToken}`,
    "GET"
  );
  sessionId = Object(result).session_id;
}

async function criarLista(nomeDaLista: string, descricao: string) {
  let result = await HttpClient.get(
    `https://api.themoviedb.org/3/list?api_key=${apiKey}&session_id=${sessionId}`,
    "POST",
    {
      name: nomeDaLista,
      description: descricao,
      language: "pt-br"
    }
  )
  console.log(result);
}

async function adicionarFilmeNaLista(filmeId: string, listaId: string) {
  let result = await HttpClient.get(
    `https://api.themoviedb.org/3/list/${listaId}/add_item?api_key=${apiKey}&session_id=${sessionId}`,
    "POST",
    {
      media_id: filmeId
    }
  )
  console.log(result);
}

async function pegarLista() {
  let result = await HttpClient.get(
    `https://api.themoviedb.org/3/list/${listId}?api_key=${apiKey}`,
    "GET"
  )
  console.log(result);
}

 
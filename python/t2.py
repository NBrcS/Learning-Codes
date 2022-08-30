def sum(arr, target):
    used_sums = []
    response = []
    found = False
    out = ""

    # Resumindo a lógica por trás, eu passo pelo arr uma primeira vez
    # pra pegar os numeros do array e depois, uma segunda vez para fazer
    # a soma. Antes de fazer a soma, eu verifico se os numeros sao os mesmos
    # ate por que não faz sentido somar um numero com ele mesmo neste caso.
    # Depois, verifico se a soma atinge o objetivo e declaro found como true,
    # pq pelo menos uma soma ali existe

    # Entao eu verifico se essa soma ja foi feita anteriormente, e caso nao
    # tenha sido feita, adicionio no array de saida e no array de somas usadas
    # pra que ela nao apareca duas vezes

    # Por fim eu itero o array de saida e retorno uma string como resposta da funcao

    for num_i in arr:
        for num_j in arr:
            if num_i != num_j:
                if num_i + num_j == target:
                    found = True

                    can = True
                    for sum in used_sums:
                        if num_j == sum[0] and num_i == sum[1]:
                            can = False

                    if can:
                        remove_sum = [num_i, num_j]
                        used_sums.append(remove_sum)

                        this_sum = "(" + str(num_i) + " + " + str(num_j) + ") "
                        response.append(this_sum)

    out += str(found) + " "
    if found:
        for item in response:
            out += str(item)

    return out


arr = [1, 2, 3, 5, 6, 4]
print(sum(arr, 7))

let indice = 0; // Criando variável de índice

// Enquanto o índice for menor ou igual a 10, continua a execução
// dentro do while
while(indice <= 10) {
    console.log(`Estou no índice ${indice}`);
    indice++; // Aumentando o valor de índice
}

// Criando o laço de repetição inicializado em 0, irá ser finalizado quando o valor
// for maior que 10, e a cada repetição, acrescenta 1 na variável indice
for(let indice = 0; indice <= 10; indice++) {
    console.log(`Estou no índice ${indice}`);
}

// Estabelecendo a lista de números
let numeros = [1, 5, 19, 17, 9, 4];

// Percorrendo a lista e imprimindo cada valor seu
for(let i of numeros) {
    console.log(i);
}
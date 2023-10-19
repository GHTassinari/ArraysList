#Lista de Vetores - Arrays list of exercises

Aqui contém todos os exercícios feitos de vetores, possuem comentários e impressões em português, explicando quais dados são necessários no scanf pelo usuário.

English - 

Here contains all the exercises related to arrays, with comments and explanations in Portuguese, specifying the required input data using scanf by the user.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Enunciados dos exercícios:

1. Escreva um programa que leia ou gere um vetor de N elementos inteiros (N deve ser informado pelo usuário
e o limite do vetor é 100) e passe o mesmo como parâmetro para uma função que retorne a soma de seus
elementos.

2. Dado um vetor de n números reais, crie uma função que retorne o menor elemento do vetor, apresente o
vetor.

3. Dado um vetor de n números reais, crie uma função que retorne o maior elemento do vetor, apresente o
vetor.

4. Escreva um programa que leia ou gere um vetor de N elementos inteiros. A seguir, crie uma função que receba
esse vetor e conte quantos valores impares existem no vetor. Retorne a quantidade de impares.

5. Receber um vetor de N posições do tipo inteiro verificar quantas vezes um dado valor informado pelo usuário
se encontra no vetor. Apresente também todos elementos do vetor.

6. Escreve um programa que sorteio, aleatoriamente, N números e armazene estes em um vetor. Em seguida, o
usuário digita um número e seu programa em C deve acusar se o número digitado está no vetor ou não. Se
estiver, diga a posição que está.

7. Escreva um programa que leia ou gere dois vetores de N posições e faça a multiplicação dos elementos de
mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.

8. Tentando descobrir se um dado era viciado, um dono de cassino honesto o lançou N vezes. Dados os n
resultados dos lançamentos que devem ser armazenados em um vetor, determinar o número de ocorrências
de cada face.

9. Leia um vetor de caracteres (limite 100) utilizando a função gets(). Utilize a função strlen (Você deve incluir a
biblioteca string.h) para obter a quantidade de elementos do vetor de caracteres. Escreva o vetor lido em
ordem inversa.

10. Leia um vetor DNA de caracteres para receber as letras A, T, C e G que representam as bases do DNA. Este
vetor será responsável por representar uma fita de um gene de limite de 50 bases. Gere o vetor complementar
ao vetor DNA e o apresente (Lembrando as bases complementares A=T C=G).

11. Carnaval
O Carnaval é um feriado celebrado normalmente em fevereiro; em muitas cidades brasileiras, a principal atração são
os desfiles de escolas de samba. As várias agremiações desfilam ao som de seus sambas-enredos e são julgadas
pela liga das escolas de samba para determinar a campeã do Carnaval.

Cada agremiação é avaliada em vários quesitos; em cada quesito, cada escola recebe cinco notas que variam de 5,0
a 10,0. A nota final da escola em um dado quesito é a soma das três notas centrais recebidas pela escola, excluindo a
maior e a menor das cinco notas.

Como existem muitas escolas de samba e muitos quesitos, o presidente da liga pediu que você escrevesse um
programa que, dadas as notas da agremiação, calcula a sua nota final num dado quesito.

Entrada:
A entrada contém uma única linha, contendo cinco números Ni (1 ≤ i ≤ 5), todos com uma casa decimal, indicando as
notas recebidas pela agremiação em um dos quesitos.

Saída:
Seu programa deve imprimir uma única linha, contendo um único número com exatamente uma casa decimal, a nota
final da escola de samba no quesito considerado.

Exemplos:

Entrada:
6.4 8.2 8.2 7.4 9.1

Saída:
23.8

Entrada:
10.0 10.0 5.0 5.0 10.0

Saída:
25.0

12. Uma brincadeira que crianças adoram é se comunicar na língua do P, acrescentando pê antes de
cada sílaba, como uma forma de código para dificultar que outras pessoas entendam a conversa
(pê-va pê-mos pê-no pê-ci pê-ne pê-ma?). Jacy e Kátia adaptaram a língua do P para mensagens
eletrônicas, acrescentando a letra P minúscula 'p' antes de cada letra das palavras de uma
mensagem. Um exemplo de mensagem codificada e a respectiva mensagem decodificada é
mostrada na figura abaixo.

Sua tarefa é escrever um programa que decodifique uma mensagem escrita na língua do P eletrônica de
Jacy e Kátia.
Entrada A entrada consiste de uma única linha, contendo uma mensagem escrita na língua do P
eletrônica de Jacy e Kátia.
Saída Seu programa deve produzir uma única linha, contendo a mensagem decodificada.
Restrições A mensagem contém apenas letras maiúsculas e minúsculas e espaços em branco. A
mensagem tem entre 1 e 1000 caracteres. Não há dois espaços em branco consecutivos na mensagem.
Exemplos:

Entrada:
pUpm pfpiplpmpe plpepgpapl

Saída:
Um filme legal

Entrada:
pA pppapppa pdpo pPpapppa

Saída:
A papa do Papa

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

English -

Exercise statements:

1 - Write a program that reads or generates a vector of N integer elements 
(N must be provided by the user, and the vector's size is limited to 100) and pass it as a parameter to a function that returns the sum of its elements.

2 - Given a vector of n real numbers, create a function that returns the smallest element of the vector and displays the vector.

3 - Given a vector of n real numbers, create a function that returns the largest element of the vector and displays the vector.

4 - Write a program that reads or generates a vector of N integer elements. 
Then, create a function that receives this vector and counts how many odd values exist in the vector. Return the count of odds.

5 - Receive a vector of N integer positions and check how many times a given value, provided by the user, is found in the vector. 
Also, display all elements of the vector.

6 - Write a program that randomly generates N numbers and stores them in a vector. 
Then, the user inputs a number, and your C program should indicate whether the entered number is in the vector or not. If it is, state its position.

7 - Write a program that reads or generates two vectors of N positions and multiplies the elements of the same index, placing the results in a third vector. 
Display the resulting vector.

8 - Trying to determine if a die was biased, an honest casino owner rolled it N times. 
Given the N results of the rolls, which should be stored in a vector, determine the number of occurrences for each face.

9 - Read a character vector (limit 100) using the gets() function. 
Use the strlen function (you must include the string.h library) to get the number of elements in the character vector. Write the read vector in reverse order.

10 - Read a DNA character vector to receive the letters A, T, C, and G, which represent the DNA bases. 
This vector will represent a strand of a gene with a limit of 50 bases. Generate the complementary vector to the DNA vector and display it 
(Remember, complementary bases are A=T and C=G).

11 - Carnival
Carnival is a holiday celebrated usually in February; in many Brazilian cities, the main attractions are the samba school parades. 
The various groups parade to the sound of their samba-enredos (theme songs) and are judged by the samba school league to determine the carnival champion.

Each samba school is evaluated in several criteria; for each criterion, each school receives five scores ranging from 5.0 to 10.0. 
 The school's final score for a given criterion is the sum of the three middle scores received by the school, excluding the highest and lowest of the five scores.

As there are many samba schools and many criteria, the league president asked you to write a program that, given the school's scores, calculates its final score in a given 
criterion.

Input:
The input contains a single line containing five numbers Ni (1 ≤ i ≤ 5), all with one decimal place, indicating the scores received by the school in one of the criteria.

Output:
Your program should print a single line containing a single number with exactly one decimal place, which is the school's final score in the considered criterion.

Examples:

Input:
6.4 8.2 8.2 7.4 9.1

Output:
23.8

Input:
10.0 10.0 5.0 5.0 10.0

Output:
25.0

12 - A game that kids love to play is communicating in the P language, adding "pê" before each syllable as a code to make conversations difficult
 for others to understand ("pê-va pê-mos pê-no pê-ci pê-ne pê-ma?"). Jacy and Kátia adapted the P language for electronic messages, 
   adding the lowercase letter 'p' before each letter of words in a message. An example of a coded message and its decoded version is shown in the figure below.
Your task is to write a program that decodes a message written in Jacy and Kátia's electronic P language.
Input The input consists of a single line containing a message written in Jacy and Kátia's electronic P language.
Output Your program should produce a single line containing the decoded message.
Restrictions The message contains only uppercase and lowercase letters and whitespace. The message has between 1 and 1000 characters. 
 There are no two consecutive whitespace characters in the message.
Examples:

Input:
pUpm pfpiplpmpe plpepgpapl

Output:
An enjoyable movie

Input:
pA pppapppa pdpo pPpapppa

Output:
A dad's apple




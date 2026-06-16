# Evolução de Ponteiros e Alocação Dinâmica em C

Este repositório contém a resolução de uma sequência didática de 5 atividades focadas no aprendizado prático de gerenciamento de memória em Linguagem C.

## 📋 Atividades Desenvolvidas

* **Atividade 1:** Modificação direta de variáveis `float` na memória através de ponteiros utilizando o operador de desreferenciação (`*`).
* **Atividade 2:** Passagem por referência em funções (`void`), permitindo que alterações em escopos externos reflitam na função principal (`main`).
* **Atividade 3:** Manipulação de registros complexos (`struct Produto`) utilizando ponteiros e o operador seta (`->`).
* **Atividade 4:** Navegação e iteração em arrays utilizando **Aritmética de Ponteiros** pura, substituindo a sintaxe tradicional de colchetes `ptr[i]` por `*(ptr + i)`.
* **Atividade 5:** Substituição do limite de vetor estático por **Alocação Dinâmica de Memória** no Heap via `malloc()`, finalizando com a liberação de recursos através do `free()`.

## 🛠️ Conceitos Chave Aplicados

* **Ponteiros:** `&variavel` (endereço) e `*ponteiro` (valor apontado).
* **Operador Seta (`->`):** Atalho para `(*ponteiro).campo`.
* **Deslocamento na Memória:** `(ptr + i)` calcula automaticamente o salto de bytes com base no tamanho (`sizeof`) da Struct.
* **Gerenciamento de Heap:** Evitando vazamentos de memória (*Memory Leak*) limpando buffers com `free()`.

## 💻 Como Compilar e Rodar

Certifique-se de possuir o GCC instalado em sua máquina.

```bash
# Compilar o código
gcc main.c -o gerenciador_estoque

# Executar o programa
./gerenciador_estoque

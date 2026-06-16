#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *p, float percentual_desconto)
{
    float desconto = p->preco * (percentual_desconto / 100.0f);
    p->preco -= desconto;
}

void imprimir_produtos(Produto *ptr, int quantidade)
{
    printf("\n--- RELATÓRIO DE PRODUTOS ---\n");
    for (int i = 0; i < quantidade; i++)
    {
        printf("Produto ID: %d | Preço Atual: R$ %.2f\n", (ptr + i)->id, (ptr + i)->preco);
    }
    printf("-----------------------------\n");
}

int main()
{
    int qtd;

    printf("Quantos produtos deseja cadastrar no estoque? ");
    if (scanf("%d", &qtd) != 1 || qtd <= 0)
    {
        printf("Quantidade inválida.\n");
        return 1;
    }

    Produto *estoque = (Produto *)malloc(qtd * sizeof(Produto));

    if (estoque == NULL)
    {
        printf("Erro: Memória insuficiente!\n");
        return 1;
    }

    for (int i = 0; i < qtd; i++)
    {
        Produto *p_atual = estoque + i;

        printf("\nCadastrando o produto %d:\n", i + 1);
        printf("Digite o ID do produto: ");
        scanf("%d", &p_atual->id);
        printf("Digite o preço do produto: R$ ");
        scanf("%f", &p_atual->preco);

        aplicar_desconto(p_atual, 10.0f);
        printf("-> Aplicado desconto de 10%% para este produto!\n");
    }

    imprimir_produtos(estoque, qtd);

    free(estoque);
    estoque = NULL;

    printf("\nMemória desalocada com sucesso. Programa encerrado.\n");
    return 0;
}
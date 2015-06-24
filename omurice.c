#include <stdio.h>
/*仕様1の実装*/

/*RECIPE構造体の定義*/
struct RECIPE{
             char *title;
             };

int main() {
struct RECIPE recipe;

recipe.title="オムライス"; /*タイトルにオムライスを代入する*/
        printf("タイトル:「%s」\n",recipe.title); /*"タイトル"を標準出力に出力する*/
        return 0;
}

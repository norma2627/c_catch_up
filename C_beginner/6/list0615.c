int search(int v[], int key, int n){
    int i;

    v[n] = key;

    for (i = 0; v[i] != key; i++){
        ;
    }
    return i < n ? i : FAILED;
}
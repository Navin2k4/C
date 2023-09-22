
typedef struct
{
    int coeff[10];
    int highpow;
} *polynomial;

void polyadd(const polynomial poly1, const polynomial poly2, polynomial polysum){
    int i;
    zeropolynomial(polysum);
    polysum->highpow = max(poly1->highpow,poly2->highpow);
    for( i = polysum->highpow ; i>=0 ; i--){
        polysum->coeff[i] = poly1->coeff[i]+poly2->coeff[i];
    }
}

void zeropolynomial(polynomial poly){
    int i;
    for(i=0;i<=maxdegree;i++){
        poly->coeff[i] = 0 ;
    }
    poly->highpow = 0 ;
}

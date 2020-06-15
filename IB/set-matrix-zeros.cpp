// void setZero(vector<vector<int> > &A,int &i,int &j,int &row,int &col){
//     int temp;
//     for(temp=0;temp<col;temp++){
//         if(A[i][temp]==1){
//             A[i][temp]=-1;
//         }
//     }
//     for(temp=0;temp<row;temp++){
//         if(A[temp][j]==1){
//             A[temp][j]=-1;
//         }
//     }
// }

// void Solution::setZeroes(vector<vector<int> > &A) {
//     // Do not write main() function.
//     // Do not read input, instead use the arguments to the function.
//     // Do not print the output, instead return values as specified
//     // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
//     int row=A.size(),col=A[0].size(),i,j;
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++){
//             if(A[i][j]==0){
//                 setZero(A,i,j,row,col);
//             }
//         }
//     }
//     for(i=0;i<row;i++)
//         for(j=0;j<col;j++){
//             if(A[i][j]==-1) A[i][j]=0;
//         }

//     // return A;

// }

void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int m = A.size(), n = A[0].size();
    int r1 = 0, c1 = 0;
    for (int i = 0; i < n; i++) {
        if (A[0][i] == 0) {
            r1 = 1;
            break;
        }
    }
    for (int i = 0; i < m; i++) {
        if (A[i][0] == 0) {
            c1 = 1;
            break;
        }
    }
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (A[i][j] == 0) {
                A[i][0] = 0;
                A[0][j] = 0;
            }
        }
    }
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (A[i][0] == 0 || A[0][j] == 0)
                A[i][j] = 0;
        }
    }
    if (r1 == 1) {
        for (int i = 0; i < n; i++)
            A[0][i] = 0;
    }
    if (c1 == 1) {
        for (int i = 0; i < m; i++)
            A[i][0] = 0;
    }
}
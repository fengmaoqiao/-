//递归与分治
Divide-and-Counter(P)
{
    if( |P|<=n0 ) Adhoc(P);
    //将问题P分解为子问题P1,P2,...Pk;
    for( i=0;i<=k;i++ )
        yi = Divide-and-conquer(Pi);
    return Merge(y1,y2,...,yk);
}

//|P|表示问题P的规模，n0为阈值，表示问题P的规模不超过n0，问题已容易求解，不再分解，Adhoc(P)是该分治法中的基本算法
//用于直接解小规模的问题P。
//
//算法Merge(y1,y2,...,yk)是该分治法中的合并子算法，用于将P的子问题P1，P2，P3，..Pk合并为P的解
//

//动态规划


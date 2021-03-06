//d[u][v]表示边e=(u,v)的权值(不存在时设为INF,不过d[i][i]=0) 
int d[MAX_V][MAX_V];
int V;
void warshall_floyd(){
	for(int k=0;k<V;k++)
		for(int i=0;i<V;i++)
			for(int j=0;j<V;j++)
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
}

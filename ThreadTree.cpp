 //��������������
 void InThread (ThreadTree &p,Threadtree &pre)
 {
 	if(p)
  {
 		InTread(p->lchild,pre);
 		if(p->lchild==null)
 	{
 		p->lchild=pre;
 		p->ltag=1;
 	}
 	if(pre!=null&&pre->rchild==null)
 	{
 		pre->rchild=p;
		 pre->rtag=1;
 		
 	}
 	pre=p;
 	InThread(p->rchild,pre);
  }
 } 
 
 
 //�����������������
 void InOrderTraverse(ThreadTree T)
 {
 	ThreadTree p=T;
 	while(p)
 	{
 		while(p->ltag==0) 
 		p=p->lchild; //�ҵ���һ����
		 visit(p);
		 while(p->rtag==1&&P->rchild)
		 {
		 	p=p->rchild;
		 	visit(p);
		 } 
		  p=p->rchild; 
 	}
 } 
 
 
 
 
 
 
 
  

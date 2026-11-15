TreeNode *parant2( TreeNode **p, TreeNode *q){
  if(!*p) return nullptr;
    if(*p==q) return *p;
    else if(parant(&(p->left),q)) return parant(p->left,q) ;
    else if(parant(&(p->right),q)) return parant(p->left,q);
    else return nullptr;
}
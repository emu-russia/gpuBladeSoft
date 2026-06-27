void __thiscall sub_6F93EE90(int this, unsigned int a2)
{
  unsigned int v2; // edx@1
  unsigned int v3; // eax@1
  void *v4; // edi@3
  int v5; // esi@3
  unsigned int v6; // ebp@4
  int v7; // ebx@6
  int v8; // edx@9
  void *v9; // eax@14
  void *v10; // edi@14
  void *v11; // ebp@14
  int v12; // eax@14
  unsigned int v13; // eax@19

  v2 = *(_DWORD *)(this + 4);
  v3 = a2;
  if ( a2 < v2 )
  {
    a2 = *(_DWORD *)(this + 4);
    v3 = v2;
  }
  v4 = *(void **)this;
  v5 = this + 8;
  if ( this + 8 == *(_DWORD *)this )
    v6 = 7;
  else
    v6 = *(_DWORD *)(this + 8);
  if ( v6 != v3 )
  {
    v7 = this;
    if ( v3 > 7 || v6 < v3 )
    {
      v9 = sub_6F93F180(&a2, v6);
      v10 = *(void **)v7;
      v11 = v9;
      v12 = *(_DWORD *)(v7 + 4) + 1;
      if ( v12 == 1 )
      {
        *(_WORD *)v11 = *(_WORD *)v10;
      }
      else if ( *(_DWORD *)(v7 + 4) != -1 )
      {
        memcpy(v11, *(const void **)v7, 2 * v12);
      }
      if ( (void *)v5 != v10 )
        j_free_1(v10);
      v13 = a2;
      *(_DWORD *)v7 = v11;
      *(_DWORD *)(v7 + 8) = v13;
    }
    else if ( (void *)v5 != v4 )
    {
      v8 = v2 + 1;
      if ( v8 == 1 )
      {
        *(_WORD *)(this + 8) = *(_WORD *)v4;
      }
      else if ( v8 )
      {
        memcpy((void *)(this + 8), *(const void **)this, 2 * v8);
      }
      j_free_1(v4);
      *(_DWORD *)v7 = v5;
    }
  }
}

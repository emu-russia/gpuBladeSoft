void __thiscall sub_6F93BF60(int this, unsigned int a2)
{
  unsigned int v2; // edx@1
  unsigned int v3; // eax@1
  const void *v4; // edi@3
  int v5; // esi@3
  unsigned int v6; // ebp@4
  int v7; // ebx@6
  size_t v8; // edx@9
  void *v9; // eax@14
  const void *v10; // edi@14
  void *v11; // ebp@14
  unsigned int v12; // eax@19

  v2 = *(_DWORD *)(this + 4);
  v3 = a2;
  if ( a2 < v2 )
  {
    a2 = *(_DWORD *)(this + 4);
    v3 = v2;
  }
  v4 = *(const void **)this;
  v5 = this + 8;
  if ( this + 8 == *(_DWORD *)this )
    v6 = 15;
  else
    v6 = *(_DWORD *)(this + 8);
  if ( v6 != v3 )
  {
    v7 = this;
    if ( v3 > 0xF || v6 < v3 )
    {
      v9 = sub_6F93C230(&a2, v6);
      v10 = *(const void **)v7;
      v11 = v9;
      if ( *(_DWORD *)(v7 + 4) == 0 )
      {
        *(_BYTE *)v9 = *(_BYTE *)v10;
      }
      else if ( *(_DWORD *)(v7 + 4) != -1 )
      {
        memcpy(v9, v10, *(_DWORD *)(v7 + 4) + 1);
      }
      if ( v10 != (const void *)v5 )
        j_free_1((void *)v10);
      v12 = a2;
      *(_DWORD *)v7 = v11;
      *(_DWORD *)(v7 + 8) = v12;
    }
    else if ( (const void *)v5 != v4 )
    {
      v8 = v2 + 1;
      if ( v8 == 1 )
      {
        *(_BYTE *)(this + 8) = *(_BYTE *)v4;
      }
      else if ( v8 )
      {
        memcpy((void *)(this + 8), v4, v8);
      }
      j_free_1((void *)v4);
      *(_DWORD *)v7 = v5;
    }
  }
}

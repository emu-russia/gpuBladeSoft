int __thiscall sub_6F93A950(int this, int a2, int a3, size_t a4, char a5)
{
  int v5; // ebx@1
  int v6; // edx@1
  int v7; // eax@2
  size_t v8; // esi@2
  unsigned int v9; // ebp@3
  size_t v10; // edx@5
  int v11; // eax@7
  const void *v12; // ecx@7
  void *v13; // eax@7
  void *v14; // eax@10

  v5 = this;
  v6 = *(_DWORD *)(this + 4);
  if ( a4 > a3 + 0x7FFFFFFF - v6 )
    sub_6F95B240("basic_string::_M_replace_aux");
  v7 = *(_DWORD *)this;
  v8 = v6 + a4 - a3;
  if ( *(_DWORD *)this == this + 8 )
    v9 = 15;
  else
    v9 = *(_DWORD *)(this + 8);
  if ( v9 < v8 )
  {
    sub_6F93C2B0(this, a2, a3, 0, a4);
    v7 = *(_DWORD *)v5;
    if ( !a4 )
      goto LABEL_12;
  }
  else
  {
    v10 = v6 - (a3 + a2);
    if ( !v10 || a3 == a4 )
    {
LABEL_9:
      if ( !a4 )
        goto LABEL_12;
      goto LABEL_10;
    }
    v11 = a2 + v7;
    v12 = (const void *)(v11 + a3);
    v13 = (void *)(a4 + v11);
    if ( v10 != 1 )
    {
      memmove(v13, v12, v10);
      v7 = *(_DWORD *)v5;
      goto LABEL_9;
    }
    *(_BYTE *)v13 = *(_BYTE *)v12;
    v7 = *(_DWORD *)v5;
    if ( !a4 )
      goto LABEL_12;
  }
LABEL_10:
  v14 = (void *)(a2 + v7);
  if ( a4 == 1 )
  {
    *(_BYTE *)v14 = a5;
    v7 = *(_DWORD *)v5;
  }
  else
  {
    memset(v14, a5, a4);
    v7 = *(_DWORD *)v5;
  }
LABEL_12:
  *(_DWORD *)(v5 + 4) = v8;
  *(_BYTE *)(v7 + v8) = 0;
  return v5;
}

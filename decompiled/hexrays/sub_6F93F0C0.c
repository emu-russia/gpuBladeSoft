void __thiscall sub_6F93F0C0(int this, int a2)
{
  _WORD *v2; // eax@2
  int v3; // ebp@2
  unsigned int v4; // esi@2
  unsigned int v5; // edx@3
  int v6; // ebx@4
  size_t v7; // edx@5
  const void *v8; // ecx@6
  _WORD *v9; // ST1C_4@11
  int v10; // edx@12
  int v11; // [sp+2Ch] [bp-20h]@10

  if ( this != a2 )
  {
    v2 = *(_WORD **)this;
    v3 = this + 8;
    v4 = *(_DWORD *)(a2 + 4);
    if ( this + 8 == *(_DWORD *)this )
      v5 = 7;
    else
      v5 = *(_DWORD *)(this + 8);
    v6 = this;
    if ( v5 < v4 )
    {
      v11 = *(_DWORD *)(a2 + 4);
      v2 = sub_6F93F180((unsigned int *)&v11, v5);
      if ( v3 != *(_DWORD *)v6 )
      {
        v9 = v2;
        j_free_1(*(void **)v6);
        v2 = v9;
      }
      v10 = v11;
      *(_DWORD *)v6 = v2;
      *(_DWORD *)(v6 + 8) = v10;
      v7 = 2 * v4;
      if ( !v4 )
        goto LABEL_8;
    }
    else
    {
      v7 = 2 * v4;
      if ( !v4 )
      {
LABEL_8:
        *(_DWORD *)(v6 + 4) = v4;
        v2[v4] = 0;
        return;
      }
    }
    v8 = *(const void **)a2;
    if ( v4 == 1 )
    {
      *v2 = *(_WORD *)v8;
    }
    else
    {
      memcpy(v2, v8, v7);
      v2 = *(_WORD **)v6;
    }
    goto LABEL_8;
  }
}

void __thiscall sub_6F93C180(int this, int a2)
{
  _BYTE *v2; // eax@2
  int v3; // ebp@2
  size_t v4; // esi@2
  unsigned int v5; // edx@3
  int v6; // ebx@4
  const void *v7; // edx@6
  _BYTE *v8; // ST1C_4@11
  int v9; // edx@12
  int v10; // [sp+2Ch] [bp-20h]@10

  if ( this != a2 )
  {
    v2 = *(_BYTE **)this;
    v3 = this + 8;
    v4 = *(_DWORD *)(a2 + 4);
    if ( this + 8 == *(_DWORD *)this )
      v5 = 15;
    else
      v5 = *(_DWORD *)(this + 8);
    v6 = this;
    if ( v5 < v4 )
    {
      v10 = *(_DWORD *)(a2 + 4);
      v2 = sub_6F93C230((unsigned int *)&v10, v5);
      if ( v3 != *(_DWORD *)v6 )
      {
        v8 = v2;
        j_free_1(*(void **)v6);
        v2 = v8;
      }
      v9 = v10;
      *(_DWORD *)v6 = v2;
      *(_DWORD *)(v6 + 8) = v9;
      if ( !v4 )
        goto LABEL_8;
    }
    else if ( !v4 )
    {
LABEL_8:
      *(_DWORD *)(v6 + 4) = v4;
      v2[v4] = 0;
      return;
    }
    v7 = *(const void **)a2;
    if ( v4 == 1 )
    {
      *v2 = *(_BYTE *)v7;
      v2 = *(_BYTE **)v6;
    }
    else
    {
      memcpy(v2, v7, v4);
      v2 = *(_BYTE **)v6;
    }
    goto LABEL_8;
  }
}

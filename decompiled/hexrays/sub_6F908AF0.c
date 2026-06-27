unsigned int *__thiscall sub_6F908AF0(unsigned int *this, unsigned int a2, size_t a3)
{
  unsigned int *v3; // ebx@1
  const void *v4; // ebp@1
  unsigned int v5; // eax@2
  int v6; // esi@2
  unsigned int v7; // esi@3
  void *v8; // eax@7
  unsigned int v9; // eax@9
  unsigned int v11; // ebp@11
  int v12; // eax@13
  bool v13; // zf@13
  bool v14; // sf@13

  v3 = this;
  v4 = (const void *)a2;
  if ( a3 )
  {
    v5 = *this;
    v6 = *(_DWORD *)(*this - 12);
    if ( a3 > 1073741820 - v6 )
      sub_6F95B240("basic_string::append");
    v7 = a3 + v6;
    if ( v7 > *(_DWORD *)(v5 - 8)
      || (v12 = *(_DWORD *)(v5 - 4), v13 = v12 == 0, v14 = v12 < 0, v5 = *this, !v14 && !v13) )
    {
      if ( v5 <= a2 && a2 <= v5 + *(_DWORD *)(v5 - 12) )
      {
        v11 = a2 - v5;
        sub_6F909A00((int *)this, v7);
        v4 = (const void *)(*v3 + v11);
        v8 = (void *)(*(_DWORD *)(*v3 - 12) + *v3);
        if ( a3 != 1 )
          goto LABEL_8;
        goto LABEL_12;
      }
      sub_6F909A00((int *)this, v7);
      v5 = *v3;
    }
    v8 = (void *)(*(_DWORD *)(v5 - 12) + v5);
    if ( a3 != 1 )
    {
LABEL_8:
      memcpy(v8, v4, a3);
LABEL_9:
      v9 = *v3;
      *(_DWORD *)(v9 - 4) = 0;
      *(_DWORD *)(v9 - 12) = v7;
      *(_BYTE *)(v9 + v7) = 0;
      return v3;
    }
LABEL_12:
    *(_BYTE *)v8 = *(_BYTE *)v4;
    goto LABEL_9;
  }
  return v3;
}

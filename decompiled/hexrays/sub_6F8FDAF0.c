unsigned int *__thiscall sub_6F8FDAF0(unsigned int *this, unsigned int a2, unsigned int a3)
{
  unsigned int *v3; // ebp@1
  const void *v4; // edi@1
  unsigned int v5; // eax@2
  int v6; // esi@2
  unsigned int v7; // esi@3
  void *v8; // edx@7
  unsigned int v10; // edi@11
  int v11; // eax@13
  bool v12; // zf@13
  bool v13; // sf@13

  v3 = this;
  v4 = (const void *)a2;
  if ( a3 )
  {
    v5 = *this;
    v6 = *(_DWORD *)(*this - 12);
    if ( a3 > 536870910 - v6 )
      sub_6F95B240("basic_string::append");
    v7 = a3 + v6;
    if ( v7 > *(_DWORD *)(v5 - 8)
      || (v11 = *(_DWORD *)(v5 - 4), v12 = v11 == 0, v13 = v11 < 0, v5 = *this, !v13 && !v12) )
    {
      if ( v5 <= a2 && a2 <= v5 + 2 * *(_DWORD *)(v5 - 12) )
      {
        v10 = a2 - v5;
        sub_6F8FEB20((int *)this, v7);
        v5 = *v3;
        v4 = (const void *)(*v3 + v10);
        v8 = (void *)(*v3 + 2 * *(_DWORD *)(*v3 - 12));
        if ( a3 != 1 )
          goto LABEL_8;
        goto LABEL_12;
      }
      sub_6F8FEB20((int *)this, v7);
      v5 = *v3;
    }
    v8 = (void *)(v5 + 2 * *(_DWORD *)(v5 - 12));
    if ( a3 != 1 )
    {
LABEL_8:
      memcpy(v8, v4, 2 * a3);
      v5 = *v3;
LABEL_9:
      *(_DWORD *)(v5 - 4) = 0;
      *(_DWORD *)(v5 - 12) = v7;
      *(_WORD *)(v5 + 2 * v7) = 0;
      return v3;
    }
LABEL_12:
    *(_WORD *)v8 = *(_WORD *)v4;
    goto LABEL_9;
  }
  return v3;
}

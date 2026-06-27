void *__usercall sub_6F8B3630@<eax>(int a1@<eax>)
{
  int v1; // edi@1
  int v2; // esi@1
  void *v3; // eax@6
  void *v4; // ebx@3

  v1 = a1;
  sub_6F8B35C0(&dword_6FB48AD0);
  v2 = dword_70373554;
  if ( !dword_70373554 )
  {
    v4 = calloc(1u, 0x10u);
    *(_DWORD *)v4 = v1;
    *((_DWORD *)v4 + 2) = 1;
    dword_70373554 = (int)v4;
LABEL_7:
    sub_6F8B33A0((int *)v4 + 1, 0);
    goto LABEL_9;
  }
  if ( v1 != *(_DWORD *)dword_70373554 )
  {
    while ( 1 )
    {
      v4 = *(void **)(v2 + 12);
      if ( !v4 )
        break;
      v2 = *(_DWORD *)(v2 + 12);
      if ( *(_DWORD *)v4 == v1 )
        goto LABEL_8;
    }
    v3 = calloc(1u, 0x10u);
    *(_DWORD *)v3 = v1;
    v4 = v3;
    *((_DWORD *)v3 + 2) = 1;
    *(_DWORD *)(v2 + 12) = v3;
    goto LABEL_7;
  }
  v4 = (void *)dword_70373554;
LABEL_8:
  ++*((_DWORD *)v4 + 2);
LABEL_9:
  sub_6F8B3600(&dword_6FB48AD0);
  return v4;
}

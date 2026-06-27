int __usercall sub_6F8B3A50@<eax>(int a1@<eax>)
{
  int v1; // esi@1
  int v2; // ebx@1
  int v3; // eax@5
  bool v4; // zf@7
  FILE *v6; // eax@13

  v1 = a1;
  sub_6F8B35C0(&dword_6FB48AD0);
  v2 = dword_70373554;
  if ( dword_70373554 && dword_70373554 != v1 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 + 12);
      if ( v3 == v1 || v3 == 0 )
        break;
      v2 = *(_DWORD *)(v2 + 12);
    }
  }
  else
  {
    v3 = dword_70373554;
    v2 = 0;
  }
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v1 + 8))-- == 1;
    if ( v4 )
    {
      sub_6F8B33F0((int *)(v1 + 4));
      if ( v2 )
        *(_DWORD *)(v2 + 12) = *(_DWORD *)(v1 + 12);
      else
        dword_70373554 = *(_DWORD *)(v1 + 12);
      free((void *)v1);
    }
  }
  else
  {
    v6 = (FILE *)off_6FB48ABC(2);
    fprintf(v6, "%p not found?!?!\n", v1);
  }
  return sub_6F8B3600(&dword_6FB48AD0);
}

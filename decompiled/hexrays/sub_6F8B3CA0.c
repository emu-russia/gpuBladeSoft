int sub_6F8B3CA0()
{
  void *v0; // eax@1
  volatile signed __int32 *v1; // esi@1
  int v2; // ebx@1
  int v3; // edi@1
  FILE *v5; // eax@7

  v0 = sub_6F8B3630((int)&dword_70373580);
  v1 = (volatile signed __int32 *)((char *)v0 + 4);
  v2 = (int)v0;
  sub_6F8B2F50((volatile signed __int32 *)v0 + 1);
  v3 = dword_70373580;
  if ( dword_70373580 )
  {
    if ( dword_70373580 != 1 )
    {
      v5 = (FILE *)off_6FB48ABC(2);
      fprintf(v5, " once %p is %d\n", &dword_70373580, v3);
    }
  }
  else
  {
    sub_6F8B36E0();
    dword_70373580 = 1;
  }
  sub_6F8B3270(v1);
  if ( v2 )
    sub_6F8B3A50(v2);
  return 0;
}

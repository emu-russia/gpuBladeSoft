int __usercall sub_6F764980@<eax>(int a1@<eax>, const char *a2@<edx>, FILE *a3@<ecx>)
{
  FILE *v3; // ebp@1
  const char *v4; // esi@1
  int v5; // ebx@1
  size_t v6; // edi@1
  const char *v7; // ST08_4@1
  int v8; // esi@1
  int v9; // edi@2
  void *v10; // ebp@4
  int v12; // [sp+14h] [bp-438h]@1
  size_t v13; // [sp+18h] [bp-434h]@1
  FILE *v14; // [sp+1Ch] [bp-430h]@1
  char v15; // [sp+2Fh] [bp-41Dh]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v14 = a3;
  v6 = strlen(a2);
  fprintf(v3, "\n[%s]\n", v4);
  v7 = v4;
  v8 = 0;
  sprintf(&v15, "%s:", v7);
  v13 = v6 + 1;
  v12 = *(_DWORD *)(v5 + 4);
  if ( *(_DWORD *)(v5 + 4) > 0 )
  {
    do
    {
      v9 = *(_DWORD *)(*(_DWORD *)(v5 + 12) + 4 * v8);
      if ( v9 && !strncmp(*(const char **)(*(_DWORD *)(v5 + 12) + 4 * v8), &v15, v13) )
      {
        v10 = *(void **)(*(_DWORD *)(v5 + 8) + 4 * v8);
        if ( !v10 )
          v10 = &unk_6FB55524;
        fprintf(v14, "%-30s = %s\n", v9 + v13, v10);
        v12 = *(_DWORD *)(v5 + 4);
      }
      ++v8;
    }
    while ( v8 < v12 );
  }
  return fputc(10, v14);
}

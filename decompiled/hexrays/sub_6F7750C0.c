int __usercall sub_6F7750C0@<eax>(int a1@<eax>, const char *a2@<edx>)
{
  char v2; // di@1
  int v3; // eax@1
  unsigned int v4; // esi@1
  unsigned int v5; // ebx@1
  const char *v6; // ecx@2
  unsigned int v7; // eax@2
  char v8; // dl@2
  int v9; // eax@4
  char v10; // dl@5
  int *v11; // ebp@5
  int v12; // edi@5
  int v13; // esi@8
  char v14; // ST17_1@10
  int v15; // eax@10
  const char *v17; // [sp+18h] [bp-24h]@1
  int v18; // [sp+1Ch] [bp-20h]@1

  v2 = *a2;
  v18 = a1;
  v3 = *(_DWORD *)(a1 + 128);
  v17 = a2;
  v4 = *(_DWORD *)(v3 + 4);
  v5 = *(_DWORD *)(v3 + 12);
  if ( *a2 )
  {
    v6 = a2;
    v7 = 0;
    v8 = *a2;
    do
    {
      ++v6;
      v7 = v8 + 31 * v7;
      v8 = *v6;
    }
    while ( *v6 );
    v9 = 4 * (v7 % v4);
  }
  else
  {
    v9 = 0;
  }
  v10 = v2;
  v11 = (int *)(v5 + v9);
  v12 = v5 + 4 * v4 - 4;
  while ( 1 )
  {
    v13 = *v11;
    if ( !*v11 )
      break;
    if ( **(_BYTE **)v13 == v10 )
    {
      v14 = v10;
      v15 = strcmp(*(const char **)v13, v17);
      v10 = v14;
      if ( !v15 )
        return *(_DWORD *)(v18 + 80) + 16 * *(_DWORD *)(v13 + 4);
    }
    --v11;
    if ( v5 > (unsigned int)v11 )
      v11 = (int *)v12;
  }
  return 0;
}

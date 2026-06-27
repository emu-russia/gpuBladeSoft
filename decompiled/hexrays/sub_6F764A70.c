int __usercall sub_6F764A70@<eax>(int a1@<eax>, const char *a2@<edx>, int a3@<ecx>)
{
  const char *v3; // ebx@1
  int v4; // edx@2
  char *v5; // esi@3
  int v6; // ebp@3
  int v7; // edi@4
  char v8; // al@5
  int v9; // edx@5
  char v10; // al@6
  int v11; // ecx@6
  char v12; // al@8
  int v13; // edx@8
  char v14; // al@9
  int v15; // ecx@9
  char v16; // al@11
  char *v17; // ecx@13
  int v19; // [sp+18h] [bp-434h]@1
  int v20; // [sp+1Ch] [bp-430h]@1
  char v21[1024]; // [sp+2Fh] [bp-41Dh]@3
  char v22; // [sp+42Fh] [bp-1Dh]@13

  v3 = a2;
  v19 = a1;
  v20 = a3;
  if ( a2 )
  {
    v4 = *a2;
    if ( (_BYTE)v4 )
    {
      v5 = v21;
      v6 = 0;
      while ( 1 )
      {
        v21[v6] = tolower(v4);
        v7 = ++v6;
        if ( !v3[v6] )
          break;
        ++v6;
        v8 = tolower(v3[v7]);
        v9 = v3[v7 + 1];
        v21[v7] = v8;
        if ( !(_BYTE)v9 )
          break;
        v10 = tolower(v9);
        v11 = v3[v7 + 2];
        v21[v6] = v10;
        v6 = v7 + 2;
        if ( !(_BYTE)v11 )
          break;
        v6 = v7 + 3;
        v21[v7 + 2] = tolower(v11);
        if ( !v3[v7 + 3] )
          break;
        v6 = v7 + 4;
        v12 = tolower(v3[v7 + 3]);
        v13 = v3[v7 + 4];
        v21[v7 + 3] = v12;
        if ( !(_BYTE)v13 )
          break;
        v6 = v7 + 5;
        v14 = tolower(v13);
        v15 = v3[v7 + 5];
        v21[v7 + 4] = v14;
        if ( !(_BYTE)v15 )
          break;
        v6 = v7 + 6;
        v21[v7 + 5] = tolower(v15);
        if ( !v3[v7 + 6] )
          break;
        v6 = v7 + 7;
        v16 = tolower(v3[v7 + 6]);
        v4 = v3[v7 + 7];
        v21[v7 + 6] = v16;
        if ( !(_BYTE)v4 )
          break;
        if ( v6 == 1024 )
        {
          v17 = &v22;
          goto LABEL_14;
        }
      }
      v17 = &v21[v6];
    }
    else
    {
      v5 = v21;
      v17 = v21;
    }
LABEL_14:
    *v17 = 0;
    v3 = v5;
  }
  return sub_6F763020(v19, v3, v20);
}

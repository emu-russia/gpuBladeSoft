signed int __cdecl sub_6F765FC0(int a1, const char *a2, const char *a3)
{
  const char *v3; // esi@1
  int v4; // ebx@2
  char *v5; // edi@3
  int v6; // edx@3
  char v7; // al@4
  int v8; // ebx@4
  int v9; // eax@4
  int v10; // ecx@5
  int v11; // eax@6
  char v12; // al@7
  int v13; // ecx@7
  int v14; // eax@8
  char v15; // al@9
  int v16; // ecx@9
  int v17; // eax@10
  char v18; // al@11
  char *v19; // edx@13
  int v21; // [sp+1Ch] [bp-430h]@4
  char v22[1024]; // [sp+2Fh] [bp-41Dh]@3
  char v23; // [sp+42Fh] [bp-1Dh]@13

  v3 = a2;
  if ( a2 )
  {
    v4 = *a2;
    if ( (_BYTE)v4 )
    {
      v5 = v22;
      v6 = 0;
      while ( 1 )
      {
        v21 = v6;
        v7 = tolower(v4);
        v8 = v21 + 1;
        v22[v21] = v7;
        v9 = a2[v21 + 1];
        v6 = v21 + 1;
        if ( !(_BYTE)v9 )
          break;
        v22[v8] = tolower(v9);
        v6 = v21 + 2;
        v10 = a2[v21 + 2];
        if ( !(_BYTE)v10 )
          break;
        v22[v6] = tolower(v10);
        v11 = a2[v8 + 2];
        v6 = v21 + 3;
        if ( !(_BYTE)v11 )
          break;
        v12 = tolower(v11);
        v13 = a2[v8 + 3];
        v22[v8 + 2] = v12;
        v6 = v21 + 4;
        if ( !(_BYTE)v13 )
          break;
        v22[v8 + 3] = tolower(v13);
        v14 = a2[v8 + 4];
        v6 = v21 + 5;
        if ( !(_BYTE)v14 )
          break;
        v15 = tolower(v14);
        v16 = a2[v8 + 5];
        v22[v8 + 4] = v15;
        v6 = v21 + 6;
        if ( !(_BYTE)v16 )
          break;
        v22[v8 + 5] = tolower(v16);
        v17 = a2[v8 + 6];
        v6 = v21 + 7;
        if ( !(_BYTE)v17 )
          break;
        v18 = tolower(v17);
        v6 = v21 + 8;
        v22[v8 + 6] = v18;
        v4 = a2[v8 + 7];
        if ( !(_BYTE)v4 )
          break;
        if ( v6 == 1024 )
        {
          v19 = &v23;
          goto LABEL_14;
        }
      }
      v19 = &v22[v6];
    }
    else
    {
      v5 = v22;
      v19 = v22;
    }
LABEL_14:
    *v19 = 0;
    v3 = v5;
  }
  return sub_6F763710(a1, v3, a3);
}

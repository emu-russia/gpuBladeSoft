signed int __cdecl sub_6F83FE63(int a1)
{
  int v1; // ST34_4@1
  int v2; // eax@26
  void *v3; // eax@26
  int v4; // ST20_4@26
  int v5; // ST1C_4@26
  signed int result; // eax@26
  int v7; // eax@30
  int v8; // [sp+18h] [bp-40h]@27
  int v9; // [sp+28h] [bp-30h]@23
  int v10; // [sp+2Ch] [bp-2Ch]@1
  int v11; // [sp+30h] [bp-28h]@1
  int *v12; // [sp+38h] [bp-20h]@1
  int i; // [sp+40h] [bp-18h]@28
  int v14; // [sp+44h] [bp-14h]@28
  int v15; // [sp+48h] [bp-10h]@23
  signed int v16; // [sp+4Ch] [bp-Ch]@1

  v12 = *(int **)a1;
  v1 = **(_DWORD **)a1;
  v11 = *(_DWORD *)v1;
  v10 = *(_DWORD *)(v1 + 4);
  v16 = 0;
  sub_6F83D3D8(*(_DWORD *)v1);
  if ( !*(_DWORD *)(a1 + 40) )
    v16 = sub_6F852D60(v11);
  sub_6F83BBF7(v11, v10);
  switch ( *(_DWORD *)(a1 + 40) )
  {
    case 0:
      if ( *(_BYTE *)(v10 + 25) != 3 && *(_BYTE *)(v10 + 25) || *(_BYTE *)(v10 + 24) != 8 )
        goto LABEL_22;
      goto LABEL_23;
    case 1:
    case 2:
      if ( *(_BYTE *)(v10 + 25) != 4 || *(_BYTE *)(v10 + 24) != 8 || *(_DWORD *)(v11 + 396) != 220000 || v12[6] != 256 )
        goto LABEL_22;
      goto LABEL_23;
    case 3:
      if ( *(_BYTE *)(v10 + 25) != 2 || *(_BYTE *)(v10 + 24) != 8 || *(_DWORD *)(v11 + 396) != 220000 || v12[6] != 216 )
        goto LABEL_22;
      goto LABEL_23;
    case 4:
      if ( *(_BYTE *)(v10 + 25) != 6 || *(_BYTE *)(v10 + 24) != 8 || *(_DWORD *)(v11 + 396) != 220000 || v12[6] != 244 )
        goto LABEL_22;
LABEL_23:
      v15 = *(_DWORD *)(a1 + 4);
      v9 = *(_DWORD *)(a1 + 8);
      if ( v9 < 0 )
        v15 += (1 - v12[3]) * v9;
      *(_DWORD *)(a1 + 24) = v15;
      *(_DWORD *)(a1 + 28) = v9;
      if ( v16 )
      {
        v8 = *(_DWORD *)(a1 + 28);
        while ( --v16 >= 0 )
        {
          v14 = v12[3];
          for ( i = *(_DWORD *)(a1 + 24); ; i += v8 )
          {
            v7 = v14--;
            if ( !v7 )
              break;
            sub_6F83BC7F(v11, i, 0);
          }
        }
        result = 1;
      }
      else
      {
        v2 = sub_6F839DE9(v11, v10);
        v3 = sub_6F83B4D4(v11, v2);
        v4 = (int)v3;
        *(_DWORD *)(a1 + 20) = v3;
        v5 = sub_6F839D4E((int)v12, sub_6F83F935, a1);
        *(_DWORD *)(a1 + 20) = 0;
        sub_6F83B5A7(v11, v4);
        result = v5;
      }
      return result;
    default:
LABEL_22:
      sub_6F839044(v11, (int)"bad color-map processing (internal error)");
      return result;
  }
}

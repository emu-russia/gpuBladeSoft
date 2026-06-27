int *__usercall sub_6F898FC0@<eax>(int a1@<eax>, int *a2@<edx>, unsigned int a3@<ecx>)
{
  int *v3; // esi@1
  int v4; // ebx@1
  int v5; // ebp@1
  char i; // di@1
  int v7; // ecx@1
  char v8; // al@6
  int v9; // edi@9
  int v10; // eax@9
  _BYTE *v11; // edx@10
  int v12; // edx@11
  int v14; // eax@15
  _DWORD *v15; // eax@20
  int v16; // edx@20
  _BYTE *v17; // edx@27
  int *v18; // eax@32
  signed int v19; // [sp+1Ch] [bp-30h]@1
  signed int v20; // [sp+20h] [bp-2Ch]@1
  signed int v21; // [sp+24h] [bp-28h]@1
  char v22; // [sp+28h] [bp-24h]@1
  int *v23; // [sp+2Ch] [bp-20h]@1

  v3 = a2;
  v4 = a1;
  v22 = a3;
  v23 = a2;
  v21 = a3 < 1 ? 27 : 30;
  v20 = a3 < 1 ? 26 : 29;
  v19 = a3 < 1 ? 25 : 28;
  v5 = *(_DWORD *)(a1 + 12);
  for ( i = **(_BYTE **)(a1 + 12); sub_6F8972F0(v5); i = *(_BYTE *)v5 )
  {
    *(_DWORD *)(v4 + 12) = v5 + 1;
    switch ( i )
    {
      case 114:
        *(_DWORD *)(v4 + 44) += 9;
        v12 = v19;
        v10 = 0;
        break;
      case 86:
        *(_DWORD *)(v4 + 44) += 9;
        v12 = v20;
        v10 = 0;
        break;
      case 75:
        *(_DWORD *)(v4 + 44) += 6;
        v12 = v21;
        v10 = 0;
        break;
      default:
        if ( !*(_BYTE *)(v5 + 1) )
          return 0;
        *(_DWORD *)(v4 + 12) = v5 + 2;
        v8 = *(_BYTE *)(v5 + 1);
        if ( v8 == 120 )
        {
          *(_DWORD *)(v4 + 44) += 17;
          v10 = 0;
          v12 = 76;
        }
        else if ( (v8 & 0xDF) == 79 )
        {
          *(_DWORD *)(v4 + 44) += 9;
          if ( v8 == 79 )
          {
            v9 = *(_DWORD *)(v4 + 48);
            *(_DWORD *)(v4 + 48) = 1;
            v10 = sub_6F8976D0(v4, v7);
            *(_DWORD *)(v4 + 48) = v9;
            if ( !v10 )
              return 0;
            v11 = *(_BYTE **)(v4 + 12);
            if ( *v11 != 69 )
              return 0;
            *(_DWORD *)(v4 + 12) = v11 + 1;
            v12 = 78;
          }
          else
          {
            v10 = 0;
            v12 = 78;
          }
        }
        else
        {
          if ( v8 != 119 )
            return 0;
          *(_DWORD *)(v4 + 44) += 6;
          v10 = sub_6F898EE0(v4);
          if ( !v10 )
            return 0;
          v17 = *(_BYTE **)(v4 + 12);
          if ( *v17 != 69 )
            return 0;
          *(_DWORD *)(v4 + 12) = v17 + 1;
          v12 = 79;
        }
        break;
    }
    v14 = sub_6F896B60(v4, v12, 0, v10);
    *v3 = v14;
    if ( !v14 )
      return 0;
    v5 = *(_DWORD *)(v4 + 12);
    v3 = (int *)(v14 + 8);
  }
  if ( !(v22 & 1) && i == 70 && v3 != v23 )
  {
    v15 = (_DWORD *)*v23;
    v16 = *(_DWORD *)*v23;
    if ( *(_DWORD *)*v23 != 26 )
      goto LABEL_34;
LABEL_21:
    *v15 = 29;
    while ( 1 )
    {
      v18 = v15 + 2;
      if ( v3 == v18 )
        break;
      v15 = (_DWORD *)*v18;
      v16 = *v15;
      if ( *v15 == 26 )
        goto LABEL_21;
LABEL_34:
      if ( v16 == 27 )
      {
        *v15 = 30;
      }
      else if ( v16 == 25 )
      {
        *v15 = 28;
      }
    }
  }
  return v3;
}

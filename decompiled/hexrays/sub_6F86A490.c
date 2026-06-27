char __cdecl sub_6F86A490(int a1, int a2)
{
  int v2; // eax@1
  int v3; // eax@7
  int v4; // edi@7
  int v5; // ebx@7
  int v6; // eax@7
  signed int v7; // edx@9
  signed int v8; // eax@10
  signed int v9; // ebx@13
  _BYTE *v11; // esi@19
  signed int v12; // ebx@21
  _BYTE *i; // esi@24
  signed int v14; // ebx@29
  signed int v15; // edi@30
  int v16; // esi@36
  int v17; // eax@36
  int v18; // edi@36
  _BYTE *v19; // esi@41
  int v20; // esi@46
  _BYTE *v21; // esi@47
  signed int v22; // eax@47
  signed int v23; // edi@48
  signed int v24; // ebx@48
  signed int v25; // edi@50
  _BYTE *v26; // esi@51
  int v27; // [sp+8h] [bp-40h]@30
  signed int v28; // [sp+8h] [bp-40h]@48
  int v29; // [sp+Ch] [bp-3Ch]@6
  int v30; // [sp+10h] [bp-38h]@10
  signed int v31; // [sp+10h] [bp-38h]@21
  _BYTE *v32; // [sp+14h] [bp-34h]@6
  int v33; // [sp+18h] [bp-30h]@7
  int v34; // [sp+18h] [bp-30h]@35
  int v35; // [sp+1Ch] [bp-2Ch]@7
  signed int v36; // [sp+1Ch] [bp-2Ch]@34
  int v37; // [sp+20h] [bp-28h]@5
  int v38; // [sp+24h] [bp-24h]@1
  int v39; // [sp+28h] [bp-20h]@7
  signed int v40; // [sp+28h] [bp-20h]@20
  signed int v41; // [sp+28h] [bp-20h]@41
  _WORD *v42; // [sp+2Ch] [bp-1Ch]@7

  v2 = *(_DWORD *)(a1 + 404);
  v38 = *(_DWORD *)(a1 + 404);
  if ( *(_DWORD *)(a1 + 224) )
  {
    if ( !*(_DWORD *)(v2 + 68) )
    {
      sub_6F86A39C(a1, *(_DWORD *)(v2 + 72));
      *(_DWORD *)(v38 + 68) = *(_DWORD *)(a1 + 224);
      *(_DWORD *)(v38 + 72) = ((unsigned __int8)*(_DWORD *)(v38 + 72) + 1) & 7;
    }
    --*(_DWORD *)(v38 + 68);
  }
  v37 = *(_DWORD *)(a1 + 364);
  if ( *(_DWORD *)(a1 + 300) > 0 )
  {
    v29 = 0;
    v32 = (_BYTE *)(v38 + 204);
    do
    {
      v42 = *(_WORD **)(a2 + 4 * v29);
      v3 = *(_DWORD *)(a1 + 4 * v29 + 304);
      v33 = *(_DWORD *)(a1 + 4 * v3 + 276);
      v35 = *(_DWORD *)(v33 + 20);
      v4 = v3 + 12;
      v5 = *(_DWORD *)(v38 + 4 * (v3 + 12) + 4) + *(_DWORD *)(v38 + 4 * (v35 + 16) + 12);
      v6 = v3 + 8;
      v39 = *v42 - *(_DWORD *)(v38 + 4 * v6 + 4);
      if ( *v42 == *(_DWORD *)(v38 + 4 * v6 + 4) )
      {
        sub_6F869F7C(a1, (_BYTE *)v5, 0);
        *(_DWORD *)(v38 + 4 * v4 + 4) = 0;
      }
      else
      {
        *(_DWORD *)(v38 + 4 * v6 + 4) = *v42;
        sub_6F869F7C(a1, (_BYTE *)v5, 1);
        if ( v39 <= 0 )
        {
          v39 = -v39;
          sub_6F869F7C(a1, (_BYTE *)(v5 + 1), 1);
          v11 = (_BYTE *)(v5 + 3);
          *(_DWORD *)(v38 + 4 * v4 + 4) = 8;
        }
        else
        {
          sub_6F869F7C(a1, (_BYTE *)(v5 + 1), 0);
          v11 = (_BYTE *)(v5 + 2);
          *(_DWORD *)(v38 + 4 * v4 + 4) = 4;
        }
        v40 = v39 - 1;
        if ( v40 )
        {
          sub_6F869F7C(a1, v11, 1);
          v11 = (_BYTE *)(*(_DWORD *)(v38 + 4 * (v35 + 16) + 12) + 20);
          v14 = v40 >> 1;
          if ( v40 >> 1 )
          {
            v27 = v4;
            v15 = 1;
            do
            {
              sub_6F869F7C(a1, v11, 1);
              v15 *= 2;
              ++v11;
              v14 >>= 1;
            }
            while ( v14 );
            v31 = v15;
            v4 = v27;
            v12 = v31 >> 1;
          }
          else
          {
            v12 = 0;
            v31 = 1;
          }
        }
        else
        {
          v12 = 0;
          v31 = 0;
        }
        sub_6F869F7C(a1, v11, 0);
        if ( v31 >= 1 << *(_BYTE *)(a1 + v35 + 152) >> 1 )
        {
          if ( v31 > 1 << *(_BYTE *)(a1 + v35 + 168) >> 1 )
            *(_DWORD *)(v38 + 4 * v4 + 4) += 8;
        }
        else
        {
          *(_DWORD *)(v38 + 4 * v4 + 4) = 0;
        }
        for ( i = v11 + 14; v12; v12 >>= 1 )
          sub_6F869F7C(a1, i, (v40 & v12) != 0);
      }
      v7 = *(_DWORD *)(a1 + 368);
      if ( v7 )
      {
        v30 = *(_DWORD *)(v33 + 24);
        v8 = *(_DWORD *)(a1 + 368);
        while ( !v42[*(_DWORD *)(v37 + 4 * v8)] )
        {
          if ( !--v8 )
            goto LABEL_13;
        }
        v36 = v8;
        if ( v8 > 0 )
        {
          v9 = 0;
          v34 = v30 + 32;
          while ( 1 )
          {
            v16 = *(_DWORD *)(v38 + 4 * v34 + 12) + 3 * v9;
            sub_6F869F7C(a1, (_BYTE *)v16, 0);
            v17 = *(_DWORD *)(v37 + 4 * ++v9);
            v18 = v42[v17];
            if ( !v42[v17] )
            {
              do
              {
                sub_6F869F7C(a1, (_BYTE *)(v16 + 1), 0);
                v16 += 3;
                ++v9;
              }
              while ( !v42[*(_DWORD *)(v37 + 4 * v9)] );
              v18 = v42[*(_DWORD *)(v37 + 4 * v9)];
            }
            sub_6F869F7C(a1, (_BYTE *)(v16 + 1), 1);
            if ( v18 <= 0 )
            {
              v18 = -v18;
              sub_6F869F7C(a1, v32, 1);
            }
            else
            {
              sub_6F869F7C(a1, v32, 0);
            }
            v19 = (_BYTE *)(v16 + 2);
            v41 = v18 - 1;
            if ( v18 != 1 )
            {
              sub_6F869F7C(a1, v19, 1);
              if ( v41 >> 1 )
                break;
            }
            sub_6F869F7C(a1, v19, 0);
LABEL_43:
            if ( v9 >= v36 )
            {
              v7 = *(_DWORD *)(a1 + 368);
              goto LABEL_14;
            }
          }
          sub_6F869F7C(a1, v19, 1);
          v20 = *(_DWORD *)(v38 + 4 * v34 + 12);
          if ( v9 <= *(_BYTE *)(a1 + v30 + 184) )
          {
            v21 = (_BYTE *)(v20 + 189);
            v22 = v41 >> 2;
            if ( v41 >> 2 )
              goto LABEL_48;
          }
          else
          {
            v21 = (_BYTE *)(v20 + 217);
            v22 = v41 >> 2;
            if ( v41 >> 2 )
            {
LABEL_48:
              v23 = 2;
              v28 = v9;
              v24 = v22;
              do
              {
                sub_6F869F7C(a1, v21, 1);
                v23 *= 2;
                ++v21;
                v24 >>= 1;
              }
              while ( v24 );
              v9 = v28;
              sub_6F869F7C(a1, v21, 0);
              v25 = v23 >> 1;
              if ( !v25 )
                goto LABEL_43;
              v26 = v21 + 14;
              goto LABEL_52;
            }
          }
          sub_6F869F7C(a1, v21, 0);
          v26 = v21 + 14;
          v25 = 1;
          do
          {
LABEL_52:
            sub_6F869F7C(a1, v26, (v25 & v41) != 0);
            v25 >>= 1;
          }
          while ( v25 );
          goto LABEL_43;
        }
LABEL_13:
        v9 = 0;
LABEL_14:
        if ( v9 < v7 )
          sub_6F869F7C(a1, (_BYTE *)(*(_DWORD *)(v38 + 4 * v30 + 140) + 3 * v9), 1);
      }
      ++v29;
    }
    while ( *(_DWORD *)(a1 + 300) > v29 );
  }
  return 1;
}

int __cdecl sub_6F86F800(int a1)
{
  int v1; // eax@2
  int v2; // esi@2
  int v3; // edx@4
  int v4; // edx@7
  _DWORD *v5; // edi@7
  int v6; // eax@13
  int v7; // eax@15
  int v8; // eax@19
  int v9; // esi@22
  int v10; // edx@23
  unsigned int v11; // edi@26
  int v12; // edi@28
  unsigned int v13; // edi@32
  int v14; // edi@33
  void *v15; // edx@33
  int result; // eax@36
  int v17; // edx@37
  int v18; // edx@40
  int v19; // eax@27
  int v20; // ST10_4@27
  int v21; // eax@47
  signed int v22; // eax@57
  int v23; // ST10_4@29
  int v24; // eax@9
  int v25; // [sp+14h] [bp-24h]@6
  int v26; // [sp+18h] [bp-20h]@1
  int v27; // [sp+1Ch] [bp-1Ch]@7
  void *v28; // [sp+1Ch] [bp-1Ch]@28

  v26 = *(_DWORD *)(a1 + 424);
  if ( *(_BYTE *)(a1 + 201) )
  {
    v1 = *(_DWORD *)(a1 + 368);
    v2 = v1;
    if ( v1 )
    {
      v17 = *(_DWORD *)(a1 + 372);
      if ( v1 > v17 || v17 > *(_DWORD *)(a1 + 392) || *(_DWORD *)(a1 + 296) != 1 )
        goto LABEL_4;
    }
    else if ( *(_DWORD *)(a1 + 372) )
    {
LABEL_4:
      v3 = *(_DWORD *)a1;
      *(_DWORD *)(v3 + 20) = 17;
      *(_DWORD *)(v3 + 24) = v1;
      *(_DWORD *)(*(_DWORD *)a1 + 28) = *(_DWORD *)(a1 + 372);
      *(_DWORD *)(*(_DWORD *)a1 + 32) = *(_DWORD *)(a1 + 376);
      *(_DWORD *)(*(_DWORD *)a1 + 36) = *(_DWORD *)(a1 + 380);
      (**(void (__cdecl ***)(_DWORD))a1)(a1);
      v1 = *(_DWORD *)(a1 + 368);
      v2 = *(_DWORD *)(a1 + 368);
LABEL_5:
      if ( *(_DWORD *)(a1 + 296) > 0 )
      {
        v25 = 0;
        while ( 1 )
        {
          v4 = *(_DWORD *)(*(_DWORD *)(a1 + 4 * v25 + 300) + 4);
          v27 = v4;
          v5 = (_DWORD *)(*(_DWORD *)(a1 + 140) + (v4 << 8));
          if ( v1 && *v5 < 0 )
          {
            v24 = *(_DWORD *)a1;
            *(_DWORD *)(v24 + 20) = 118;
            *(_DWORD *)(v24 + 24) = v4;
            *(_DWORD *)(*(_DWORD *)a1 + 28) = 0;
            (*(void (__cdecl **)(int, signed int))(*(_DWORD *)a1 + 4))(a1, -1);
            v1 = *(_DWORD *)(a1 + 368);
            v2 = *(_DWORD *)(a1 + 368);
          }
          if ( v1 <= *(_DWORD *)(a1 + 372) )
          {
            do
            {
              v7 = v5[v2];
              if ( v7 < 0 )
                v7 = 0;
              if ( *(_DWORD *)(a1 + 376) != v7 )
              {
                v6 = *(_DWORD *)a1;
                *(_DWORD *)(v6 + 20) = 118;
                *(_DWORD *)(v6 + 24) = v27;
                *(_DWORD *)(*(_DWORD *)a1 + 28) = v2;
                (*(void (__cdecl **)(int, signed int))(*(_DWORD *)a1 + 4))(a1, -1);
              }
              v5[v2++] = *(_DWORD *)(a1 + 380);
            }
            while ( *(_DWORD *)(a1 + 372) >= v2 );
            v1 = *(_DWORD *)(a1 + 368);
          }
          if ( *(_DWORD *)(a1 + 296) <= ++v25 )
            break;
          v2 = v1;
        }
      }
      if ( *(_DWORD *)(a1 + 376) )
      {
        if ( v1 )
          *(_DWORD *)(v26 + 4) = sub_6F8700BC;
        else
          *(_DWORD *)(v26 + 4) = sub_6F8702A4;
      }
      else if ( v1 )
      {
        *(_DWORD *)(v26 + 4) = sub_6F870328;
      }
      else
      {
        *(_DWORD *)(v26 + 4) = sub_6F87052C;
      }
      goto LABEL_21;
    }
    v18 = *(_DWORD *)(a1 + 376);
    if ( (!v18 || v18 - 1 == *(_DWORD *)(a1 + 380)) && *(_DWORD *)(a1 + 380) <= 13 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(a1 + 368)
    || *(_DWORD *)(a1 + 376)
    || *(_DWORD *)(a1 + 380)
    || (v22 = *(_DWORD *)(a1 + 372), v22 <= 63) && v22 != *(_DWORD *)(a1 + 392) )
  {
    v8 = *(_DWORD *)a1;
    *(_DWORD *)(v8 + 20) = 125;
    (*(void (__cdecl **)(int, signed int))(v8 + 4))(a1, -1);
  }
  *(_DWORD *)(v26 + 4) = sub_6F86FD14;
LABEL_21:
  if ( *(_DWORD *)(a1 + 296) > 0 )
  {
    v9 = 0;
    do
    {
      v10 = *(_DWORD *)(a1 + 4 * v9 + 300);
      if ( !*(_BYTE *)(a1 + 201) )
        goto LABEL_64;
      if ( *(_DWORD *)(a1 + 368) )
        goto LABEL_32;
      if ( !*(_DWORD *)(a1 + 376) )
      {
LABEL_64:
        v11 = *(_DWORD *)(v10 + 20);
        if ( v11 > 0xF )
        {
          v19 = *(_DWORD *)a1;
          *(_DWORD *)(v19 + 20) = 50;
          *(_DWORD *)(v19 + 24) = v11;
          v20 = v10;
          (**(void (__cdecl ***)(_DWORD))a1)(a1);
          v10 = v20;
        }
        v12 = v11 + 12;
        v28 = *(void **)(v26 + 4 * v12 + 8);
        if ( !v28 )
        {
          v23 = v10;
          v28 = (void *)(**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 64);
          *(_DWORD *)(v26 + 4 * v12 + 8) = v28;
          v10 = v23;
        }
        memset(v28, 0, 0x40u);
        *(_DWORD *)(v26 + 4 * v9 + 20) = 0;
        *(_DWORD *)(v26 + 4 * v9 + 36) = 0;
        if ( *(_BYTE *)(a1 + 201) )
        {
          if ( !*(_DWORD *)(a1 + 368) )
            goto LABEL_35;
LABEL_32:
          v13 = *(_DWORD *)(v10 + 24);
          if ( v13 > 0xF )
          {
            v21 = *(_DWORD *)a1;
            *(_DWORD *)(v21 + 20) = 50;
            *(_DWORD *)(v21 + 24) = v13;
            (**(void (__cdecl ***)(_DWORD))a1)(a1);
            v14 = v13 + 28;
            v15 = *(void **)(v26 + 4 * v14 + 8);
            if ( v15 )
              goto LABEL_34;
          }
          else
          {
            v14 = v13 + 28;
            v15 = *(void **)(v26 + 4 * v14 + 8);
            if ( v15 )
            {
LABEL_34:
              memset(v15, 0, 0x100u);
              goto LABEL_35;
            }
          }
          v15 = (void *)(**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 256);
          *(_DWORD *)(v26 + 4 * v14 + 8) = v15;
          goto LABEL_34;
        }
        if ( *(_DWORD *)(a1 + 392) )
          goto LABEL_32;
      }
LABEL_35:
      ++v9;
    }
    while ( *(_DWORD *)(a1 + 296) > v9 );
  }
  *(_DWORD *)(v26 + 8) = 0;
  *(_DWORD *)(v26 + 12) = 0;
  *(_DWORD *)(v26 + 16) = -16;
  result = *(_DWORD *)(a1 + 252);
  *(_DWORD *)(v26 + 52) = result;
  return result;
}

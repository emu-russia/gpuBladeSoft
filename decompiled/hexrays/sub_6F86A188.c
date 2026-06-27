int __cdecl sub_6F86A188(int a1, char a2)
{
  int v2; // esi@1
  int v3; // esi@9
  unsigned int v4; // edi@12
  int v5; // edi@14
  void *v6; // edx@14
  unsigned int v7; // edi@18
  int v8; // edi@19
  void *v9; // edx@19
  int result; // eax@23
  int v11; // eax@24
  int v12; // eax@2
  int v13; // eax@13
  int v14; // [sp+18h] [bp-20h]@9
  int v15; // [sp+1Ch] [bp-1Ch]@10

  v2 = *(_DWORD *)(a1 + 404);
  if ( a2 )
  {
    v12 = *(_DWORD *)a1;
    *(_DWORD *)(v12 + 20) = 49;
    (*(void (__cdecl **)(int))v12)(a1);
  }
  if ( *(_BYTE *)(a1 + 248) )
  {
    if ( *(_DWORD *)(a1 + 352) )
    {
      if ( *(_DWORD *)(a1 + 344) )
        *(_DWORD *)(v2 + 4) = sub_6F86A90C;
      else
        *(_DWORD *)(v2 + 4) = sub_6F86AB50;
    }
    else if ( *(_DWORD *)(a1 + 344) )
    {
      *(_DWORD *)(v2 + 4) = sub_6F86ABE4;
    }
    else
    {
      *(_DWORD *)(v2 + 4) = sub_6F86AE90;
    }
  }
  else
  {
    *(_DWORD *)(v2 + 4) = sub_6F86A490;
  }
  if ( *(_DWORD *)(a1 + 272) > 0 )
  {
    v14 = v2;
    v3 = 0;
    while ( 1 )
    {
      v15 = *(_DWORD *)(a1 + 4 * v3 + 276);
      if ( !*(_DWORD *)(a1 + 344) && !*(_DWORD *)(a1 + 352) )
      {
        v4 = *(_DWORD *)(*(_DWORD *)(a1 + 4 * v3 + 276) + 20);
        if ( v4 > 0xF )
        {
          v13 = *(_DWORD *)a1;
          *(_DWORD *)(v13 + 20) = 50;
          *(_DWORD *)(v13 + 24) = v4;
          (**(void (__cdecl ***)(_DWORD))a1)(a1);
        }
        v5 = v4 + 16;
        v6 = *(void **)(v14 + 4 * v5 + 12);
        if ( !v6 )
        {
          v6 = (void *)(**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 64);
          *(_DWORD *)(v14 + 4 * v5 + 12) = v6;
        }
        memset(v6, 0, 0x40u);
        *(_DWORD *)(v14 + 4 * v3 + 36) = 0;
        *(_DWORD *)(v14 + 4 * v3 + 52) = 0;
      }
      if ( !*(_DWORD *)(a1 + 348) )
        goto LABEL_21;
      v7 = *(_DWORD *)(v15 + 24);
      if ( v7 > 0xF )
      {
        v11 = *(_DWORD *)a1;
        *(_DWORD *)(v11 + 20) = 50;
        *(_DWORD *)(v11 + 24) = v7;
        (**(void (__cdecl ***)(_DWORD))a1)(a1);
        v8 = v7 + 32;
        v9 = *(void **)(v14 + 4 * v8 + 12);
        if ( !v9 )
        {
LABEL_25:
          v9 = (void *)(**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 256);
          *(_DWORD *)(v14 + 4 * v8 + 12) = v9;
          goto LABEL_20;
        }
      }
      else
      {
        v8 = v7 + 32;
        v9 = *(void **)(v14 + 4 * v8 + 12);
        if ( !v9 )
          goto LABEL_25;
      }
LABEL_20:
      memset(v9, 0, 0x100u);
LABEL_21:
      if ( *(_DWORD *)(a1 + 272) <= ++v3 )
      {
        v2 = v14;
        break;
      }
    }
  }
  *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(v2 + 16) = 0x10000;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)(v2 + 28) = 11;
  *(_DWORD *)(v2 + 32) = -1;
  result = *(_DWORD *)(a1 + 224);
  *(_DWORD *)(v2 + 68) = result;
  *(_DWORD *)(v2 + 72) = 0;
  return result;
}

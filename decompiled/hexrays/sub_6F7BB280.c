int __cdecl sub_6F7BB280(int a1, int a2)
{
  int v2; // ecx@1
  int v3; // edx@1
  int v4; // edi@1
  int v5; // eax@1
  int result; // eax@2
  int v7; // edx@4
  signed int v8; // eax@10
  signed int v9; // eax@10
  signed int v10; // eax@10
  int v11; // [sp+18h] [bp-24h]@2
  int v12; // [sp+1Ch] [bp-20h]@4
  int v13; // [sp+20h] [bp-1Ch]@10
  int v14; // [sp+24h] [bp-18h]@10
  int v15; // [sp+28h] [bp-14h]@10
  int v16; // [sp+2Ch] [bp-10h]@10

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(v2 + 456);
  v4 = *(_DWORD *)(*(_DWORD *)(v2 + 128) + 48);
  *(_DWORD *)(a1 + 1376) = *(_DWORD *)(v2 + 436);
  *(_DWORD *)(a1 + 1380) = *(_DWORD *)(v2 + 440);
  *(_DWORD *)(a1 + 1384) = *(_DWORD *)(v2 + 444);
  *(_DWORD *)(a1 + 1388) = *(_DWORD *)(v2 + 448);
  v5 = *(_DWORD *)(v2 + 452);
  *(_DWORD *)(a1 + 1396) = v3;
  *(_DWORD *)(a1 + 1392) = v5;
  if ( !v4 )
  {
    v7 = *(_DWORD *)(*(_DWORD *)(v2 + 428) + 4 * a2);
    v11 = *(_DWORD *)(*(_DWORD *)(v2 + 424) + 4 * a2);
    v12 = v7;
    result = (*(int (__cdecl **)(int, int, int))(a1 + 1484))(a1, v11, v7);
    goto LABEL_5;
  }
  result = (**(int (__cdecl ***)(_DWORD, int, int *))v4)(*(_DWORD *)(v4 + 4), a2, &v11);
  if ( !result )
  {
    result = (*(int (__cdecl **)(int, int, int))(a1 + 1484))(a1, v11, v12);
    if ( !result )
    {
      if ( !*(_DWORD *)(*(_DWORD *)v4 + 8) )
      {
LABEL_6:
        result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 128) + 48);
        if ( result )
        {
          (*(void (__cdecl **)(_DWORD, int *))(*(_DWORD *)result + 4))(*(_DWORD *)(result + 4), &v11);
          result = 0;
        }
        return result;
      }
      LOWORD(v8) = sub_6F7C9390(*(_DWORD *)(a1 + 32));
      v14 = 0;
      v13 = v8 >> 16;
      LOWORD(v9) = sub_6F7C9390(*(_DWORD *)(a1 + 40));
      v15 = v9 >> 16;
      LOWORD(v10) = sub_6F7C9390(*(_DWORD *)(a1 + 44));
      v16 = v10 >> 16;
      result = (*(int (__cdecl **)(_DWORD, int, _DWORD, int *))(*(_DWORD *)v4 + 8))(*(_DWORD *)(v4 + 4), a2, 0, &v13);
      *(_DWORD *)(a1 + 32) = v13 << 16;
      *(_DWORD *)(a1 + 40) = v15 << 16;
      *(_DWORD *)(a1 + 44) = v16 << 16;
LABEL_5:
      if ( result )
        return result;
      goto LABEL_6;
    }
  }
  return result;
}

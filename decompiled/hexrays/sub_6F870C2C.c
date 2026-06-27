int __cdecl sub_6F870C2C(int a1)
{
  int v1; // esi@1
  int result; // eax@1
  int v3; // edx@10
  int v4; // edi@15
  _DWORD *v5; // ecx@18
  signed int v6; // edx@19
  char v7; // [sp+1Bh] [bp-1Dh]@15
  int v8; // [sp+1Ch] [bp-1Ch]@9

  v1 = *(_DWORD *)(a1 + 408);
  result = *(_DWORD *)(v1 + 16);
  if ( result )
  {
    if ( *(_BYTE *)(a1 + 73) && *(_BYTE *)(a1 + 201) && *(_DWORD *)(a1 + 140) )
    {
      result = *(_DWORD *)(v1 + 112);
      if ( !result )
      {
        result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 24 * *(_DWORD *)(a1 + 36));
        *(_DWORD *)(v1 + 112) = result;
      }
      v8 = *(_DWORD *)(a1 + 196);
      if ( *(_DWORD *)(a1 + 36) > 0 )
      {
        v3 = *(_DWORD *)(*(_DWORD *)(a1 + 196) + 80);
        if ( v3 )
        {
          if ( *(_WORD *)v3 && *(_WORD *)(v3 + 2) && *(_WORD *)(v3 + 16) && *(_WORD *)(v3 + 32) )
          {
            v7 = 0;
            v4 = 0;
            while ( *(_WORD *)(v3 + 18) )
            {
              if ( !*(_WORD *)(v3 + 4) )
                break;
              v5 = (_DWORD *)(*(_DWORD *)(a1 + 140) + (v4 << 8));
              if ( *v5 < 0 )
                break;
              v6 = 1;
              do
              {
                *(_DWORD *)(result + 4 * v6) = v5[v6];
                if ( v5[v6] )
                  v7 = 1;
                ++v6;
              }
              while ( v6 != 6 );
              if ( ++v4 >= *(_DWORD *)(a1 + 36) )
              {
                if ( !v7 )
                  break;
                *(_DWORD *)(v1 + 12) = sub_6F870FC0;
                goto LABEL_4;
              }
              v8 += 88;
              v3 = *(_DWORD *)(v8 + 80);
              if ( !v3 || !*(_WORD *)v3 || !*(_WORD *)(v3 + 2) || !*(_WORD *)(v3 + 16) || !*(_WORD *)(v3 + 32) )
                break;
              result += 24;
            }
          }
        }
      }
    }
    *(_DWORD *)(v1 + 12) = sub_6F870A80;
  }
LABEL_4:
  *(_DWORD *)(a1 + 136) = 0;
  return result;
}

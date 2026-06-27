signed int __usercall sub_6F7A1FD0@<eax>(int a1@<eax>)
{
  int v1; // ecx@1
  signed int result; // eax@3
  int v3; // ST24_4@9
  __int16 v4; // ax@9
  __int16 v5; // dx@9
  unsigned int v6; // eax@9
  int v7; // [sp+14h] [bp-A4h]@8
  unsigned int v8; // [sp+18h] [bp-A0h]@2
  int v9; // [sp+1Ch] [bp-9Ch]@1
  int v10; // [sp+20h] [bp-98h]@6
  int v11; // [sp+24h] [bp-94h]@1
  int v12; // [sp+24h] [bp-94h]@5
  int v13; // [sp+24h] [bp-94h]@6
  int v14; // [sp+28h] [bp-90h]@11
  int v15; // [sp+2Ch] [bp-8Ch]@11
  void **v16; // [sp+30h] [bp-88h]@11
  int v17; // [sp+34h] [bp-84h]@14
  int v18; // [sp+38h] [bp-80h]@15
  int v19; // [sp+3Ch] [bp-7Ch]@21
  int v20; // [sp+40h] [bp-78h]@9
  int v21; // [sp+44h] [bp-74h]@9
  __int16 v22; // [sp+48h] [bp-70h]@9
  __int16 v23; // [sp+4Ah] [bp-6Eh]@9
  char v24; // [sp+4Ch] [bp-6Ch]@15
  int v25; // [sp+98h] [bp-20h]@17
  int v26; // [sp+9Ch] [bp-1Ch]@15

  v1 = *(_DWORD *)(a1 + 504);
  v11 = *(_DWORD *)(a1 + 500);
  v9 = *(_DWORD *)(a1 + 500);
  if ( !v11
    || (v8 = v9 + v1, v9 + v1 < (unsigned int)(v11 + 4))
    || (v12 = v11 + 2, (unsigned __int16)(*(_BYTE *)(v12 - 2) << 8) | *(_BYTE *)(v12 - 1)) )
  {
    result = 8;
  }
  else
  {
    v13 = v12 + 2;
    v10 = (unsigned __int16)(*(_BYTE *)(v13 - 1) | (unsigned __int16)(*(_BYTE *)(v13 - 2) << 8));
    if ( *(_BYTE *)(v13 - 1) | (unsigned __int16)(*(_BYTE *)(v13 - 2) << 8) && v8 >= v13 + 8 )
    {
      v7 = a1;
      do
      {
        v3 = v13 + 2;
        v22 = *(_BYTE *)(v3 - 1) | (unsigned __int16)(*(_BYTE *)(v3 - 2) << 8);
        v3 += 2;
        v4 = *(_BYTE *)(v3 - 2);
        v5 = *(_BYTE *)(v3 - 1);
        v20 = v7;
        v21 = 0;
        v23 = v5 | (v4 << 8);
        v13 = v3 + 4;
        v6 = (*(_BYTE *)(v13 - 4) << 24) | (*(_BYTE *)(v13 - 3) << 16) | *(_BYTE *)(v13 - 1) | (*(_BYTE *)(v13 - 2) << 8);
        if ( v6 )
        {
          if ( v6 <= *(_DWORD *)(v7 + 504) - 2 )
          {
            v14 = v9 + v6;
            v15 = _byteswap_ushort(*(_WORD *)(v9 + v6));
            v16 = &off_6FB68D80;
            if ( &unk_6FB68FC0 )
            {
              while ( 1 )
              {
                v17 = (int)*v16;
                if ( *((_DWORD *)*v16 + 10) == v15 )
                  break;
                ++v16;
                if ( !*v16 )
                  goto LABEL_18;
              }
              v18 = 0;
              sub_6F769110((int)&v24, v14, v8, 0);
              v26 = *(_WORD *)(v7 + 264);
              if ( !setjmp3((int)&v24, 0) )
                v18 = (*(int (__cdecl **)(int, char *))(v17 + 44))(v14, &v24);
              if ( !v25 && !sub_6F76D420(v17, v14, (int)&v20, &v19) )
                *(_DWORD *)(v19 + 20) = v18;
            }
          }
        }
LABEL_18:
        --v10;
      }
      while ( v10 && v8 >= v13 + 8 );
    }
    result = 0;
  }
  return result;
}

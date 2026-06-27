void __cdecl sub_6F7CF8A0(int a1, int a2, int *a3, int a4, int a5)
{
  int v5; // eax@3
  _DWORD *v6; // eax@3
  _DWORD *v7; // edi@3
  int v8; // esi@4
  int v9; // eax@5
  int v10; // eax@6
  signed int v11; // eax@7
  int *v12; // edx@7
  bool v13; // cf@8
  int v14; // esi@8
  int v15; // eax@8
  int v16; // eax@12
  int (__cdecl *v17)(_DWORD, _DWORD, _DWORD); // eax@12
  int v18; // eax@13
  int v19; // [sp+18h] [bp-44h]@3
  int v20; // [sp+1Ch] [bp-40h]@3
  int v21; // [sp+20h] [bp-3Ch]@8
  int v22; // [sp+24h] [bp-38h]@3
  int v23; // [sp+28h] [bp-34h]@3
  int v24; // [sp+2Ch] [bp-30h]@8
  int v25; // [sp+30h] [bp-2Ch]@3
  int *v26; // [sp+34h] [bp-28h]@3
  void *(__cdecl *v27)(int, int, int); // [sp+38h] [bp-24h]@3
  int (__cdecl *v28)(int, int); // [sp+3Ch] [bp-20h]@3
  int v29; // [sp+40h] [bp-1Ch]@3
  int v30; // [sp+48h] [bp-14h]@7

  if ( a2 != 0 && a3 != 0 )
  {
    if ( a1 )
    {
      v22 = a2;
      v5 = *a3;
      v19 = a4;
      v23 = v5;
      v27 = sub_6F7CBDD0;
      v28 = sub_6F7CBF80;
      v29 = a1;
      v20 = a5;
      v25 = 0;
      v6 = sub_6F7CBDD0(a1, 1, 24);
      v7 = v6;
      v26 = v6;
      if ( v6 )
      {
        v6[5] = 0;
        v6[3] = 0;
        v6[4] = 15;
        v8 = (int)v27(v29, 1, 64);
        if ( v8 )
        {
          v9 = (int)v27(v29, 8, 1440);
          *(_DWORD *)(v8 + 36) = v9;
          if ( v9 )
          {
            v10 = (int)v27(v29, 1, 0x8000);
            *(_DWORD *)(v8 + 40) = v10;
            if ( v10 )
            {
              *(_DWORD *)(v8 + 56) = sub_6F7CBA90;
              *(_DWORD *)v8 = 0;
              *(_DWORD *)(v8 + 28) = 0;
              *(_DWORD *)(v8 + 32) = 0;
              *(_DWORD *)(v8 + 44) = v10 + 0x8000;
              *(_DWORD *)(v8 + 52) = v10;
              *(_DWORD *)(v8 + 48) = v10;
              v11 = sub_6F7CBA90(0, 0, 0);
              v12 = v26;
              *(_DWORD *)(v8 + 60) = v11;
              v30 = v11;
              v7[5] = v8;
              if ( v12 )
              {
                v13 = (unsigned int)v12[3] < 1;
                v14 = v12[5];
                v24 = 0;
                v21 = 0;
                v25 = 0;
                *v12 = ~-v13 & 7;
                v15 = *(_DWORD *)v14;
                if ( (unsigned int)(*(_DWORD *)v14 - 4) <= 1 )
                {
                  v28(v29, *(_DWORD *)(v14 + 12));
                  v15 = *(_DWORD *)v14;
                }
                if ( v15 == 6 )
                  v28(v29, *(_DWORD *)(v14 + 4));
                v16 = *(_DWORD *)(v14 + 40);
                *(_DWORD *)v14 = 0;
                *(_DWORD *)(v14 + 28) = 0;
                *(_DWORD *)(v14 + 32) = 0;
                *(_DWORD *)(v14 + 52) = v16;
                *(_DWORD *)(v14 + 48) = v16;
                v17 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD))(v14 + 56);
                if ( v17 )
                {
                  v18 = v17(0, 0, 0);
                  *(_DWORD *)(v14 + 60) = v18;
                  v30 = v18;
                }
                if ( v26 && v19 && (unsigned int)*v26 <= 0xD )
                  JUMPOUT(__CS__, off_6FB6C260[*v26]);
              }
              JUMPOUT(&loc_6F7CFB76);
            }
            v28(v29, *(_DWORD *)(v8 + 36));
          }
          v28(v29, v8);
        }
        v7[5] = 0;
        sub_6F7CBF90((int)&v19);
      }
    }
  }
  JUMPOUT(loc_6F7CFAF5);
}

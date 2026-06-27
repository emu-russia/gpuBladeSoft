void __spoils<edx,ecx> sub_6F8B8F60()
{
  int v0; // edx@2
  int v1; // ecx@2
  unsigned int v2; // ecx@4
  int v3; // ebx@5
  int v4; // edi@14
  int v5; // esi@14
  int v6; // ebx@15
  int v7; // eax@6
  int *v8; // edx@6
  _DWORD *v9; // eax@18
  int v10; // [sp+0h] [bp-6Ch]@1
  int v11; // [sp+18h] [bp-54h]@2
  char v12; // [sp+1Ch] [bp-50h]@1
  int v13; // [sp+20h] [bp-4Ch]@1
  int (__cdecl *v14)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-38h]@1
  int *v15; // [sp+38h] [bp-34h]@1
  char *v16; // [sp+3Ch] [bp-30h]@1
  int (__cdecl *v17)(int, int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-2Ch]@1
  int *v18; // [sp+44h] [bp-28h]@1
  char v19; // [sp+50h] [bp-1Ch]@1

  v16 = &v19;
  v14 = sub_6F962A50;
  v15 = dword_6F96A9DC;
  v17 = sub_6F8B909E;
  v18 = &v10;
  sub_6F8A1A60((int *)&v12);
  v13 = -1;
  if ( sub_6F8B2F50((volatile signed __int32 *)&unk_6FB48D54) )
    sub_6F8BB040();
  v0 = dword_6FB48D58;
  v1 = v11 + 16;
  if ( (unsigned int)(v11 + 16) < 8 )
    v1 = 8;
  v2 = (v1 + 15) & 0xFFFFFFF0;
  if ( !dword_6FB48D58 )
  {
LABEL_10:
    v11 = 0;
    goto LABEL_11;
  }
  v3 = *(_DWORD *)dword_6FB48D58;
  if ( v2 > *(_DWORD *)dword_6FB48D58 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v0 + 4);
      if ( !v7 )
        goto LABEL_10;
      v3 = *(_DWORD *)v7;
      if ( v2 <= *(_DWORD *)v7 )
      {
        v8 = (int *)(v0 + 4);
        goto LABEL_14;
      }
      v0 = *(_DWORD *)(v0 + 4);
    }
  }
  v7 = dword_6FB48D58;
  v8 = &dword_6FB48D58;
LABEL_14:
  v4 = *(_DWORD *)(v7 + 4);
  v5 = v3 - v2;
  if ( v3 - v2 <= 7 )
  {
    *(_DWORD *)v7 = v3;
    *v8 = v4;
  }
  else
  {
    v6 = v7 + v2;
    *(_DWORD *)(v6 + 4) = v4;
    v7 = *v8;
    *(_DWORD *)v6 = v5;
    *(_DWORD *)v7 = v2;
    *v8 = v6;
  }
  v11 = v7 + 16;
LABEL_11:
  v13 = 1;
  if ( sub_6F8B3270((volatile signed __int32 *)&unk_6FB48D54) )
  {
    v9 = (_DWORD *)sub_6F961D10(4);
    *v9 = off_6FBAF62C;
    sub_6F9628A0((int)v9, (int)&off_6FBABF4C, (int)sub_6F8BAC90);
  }
  sub_6F8A1AD0((int *)&v12);
}

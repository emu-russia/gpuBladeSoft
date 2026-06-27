int __usercall sub_6F8B8DC0@<eax>(int a1@<eax>)
{
  int v1; // edx@2
  int v2; // esi@2
  int v3; // ebp@3
  unsigned int v4; // ebx@3
  unsigned int v5; // ecx@4
  _DWORD *v6; // eax@13
  int v7; // edx@13
  int v8; // ebx@14
  _DWORD *v9; // eax@14
  int v11; // eax@19
  unsigned int v12; // eax@7
  int *v13; // edi@7
  _DWORD *v14; // eax@21
  int v15; // [sp+0h] [bp-6Ch]@1
  int v16; // [sp+18h] [bp-54h]@1
  char v17; // [sp+1Ch] [bp-50h]@1
  int v18; // [sp+20h] [bp-4Ch]@1
  int (__cdecl *v19)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-38h]@1
  int *v20; // [sp+38h] [bp-34h]@1
  char *v21; // [sp+3Ch] [bp-30h]@1
  int (__cdecl *v22)(int, int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-2Ch]@1
  int *v23; // [sp+44h] [bp-28h]@1
  char v24; // [sp+50h] [bp-1Ch]@1

  v16 = a1;
  v21 = &v24;
  v19 = sub_6F962A50;
  v20 = dword_6F96A9CC;
  v22 = sub_6F8B8F3F;
  v23 = &v15;
  sub_6F8A1A60((int *)&v17);
  v18 = -1;
  if ( sub_6F8B2F50((volatile signed __int32 *)&unk_6FB48D54) )
    sub_6F8BB040();
  v1 = dword_6FB48D58;
  v2 = v16 - 16;
  if ( dword_6FB48D58 && (v3 = *(_DWORD *)(v16 - 16), v4 = v2 + v3, dword_6FB48D58 <= (unsigned int)(v2 + v3)) )
  {
    v5 = *(_DWORD *)(dword_6FB48D58 + 4);
    if ( dword_6FB48D58 == v2 + v3 )
    {
      v11 = v16;
      *(_DWORD *)(v16 - 16) = *(_DWORD *)dword_6FB48D58 + v3;
      *(_DWORD *)(v11 - 12) = v5;
      dword_6FB48D58 = v2;
    }
    else
    {
      if ( v5 )
      {
        if ( v4 < v5 )
        {
          while ( 1 )
          {
            v12 = *(_DWORD *)(v5 + 4);
            v13 = (int *)(v1 + 4);
            if ( !v12 )
              break;
            v1 = v5;
            if ( v4 >= v12 )
              break;
            v5 = *(_DWORD *)(v5 + 4);
          }
        }
        else
        {
          v12 = *(_DWORD *)(dword_6FB48D58 + 4);
          v13 = &dword_6FB48D58;
          v5 = dword_6FB48D58;
        }
      }
      else
      {
        v12 = 0;
        v5 = dword_6FB48D58;
        v13 = &dword_6FB48D58;
      }
      if ( v4 == v12 )
      {
        v3 += *(_DWORD *)v4;
        *(_DWORD *)(v5 + 4) = *(_DWORD *)(v4 + 4);
      }
      v6 = (_DWORD *)*v13;
      v7 = *(_DWORD *)*v13;
      if ( v2 == *v13 + v7 )
      {
        *v6 = v7 + v3;
      }
      else
      {
        v8 = v16;
        *(_DWORD *)(v16 - 12) = v6[1];
        v9 = (_DWORD *)*v13;
        *(_DWORD *)(v8 - 16) = v3;
        v9[1] = v2;
      }
    }
  }
  else
  {
    *(_DWORD *)(v16 - 12) = dword_6FB48D58;
    dword_6FB48D58 = v2;
  }
  v18 = 1;
  if ( sub_6F8B3270((volatile signed __int32 *)&unk_6FB48D54) )
  {
    v14 = (_DWORD *)sub_6F961D10(4);
    *v14 = off_6FBAF62C;
    sub_6F9628A0((int)v14, (int)&off_6FBABF4C, (int)sub_6F8BAC90);
  }
  return sub_6F8A1AD0((int *)&v17);
}

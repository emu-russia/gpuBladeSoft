signed int __cdecl sub_6F8B4530(int *a1, void (*a2)(void))
{
  void *v2; // eax@3
  volatile signed __int32 *v3; // ebp@3
  int v4; // esi@3
  int v5; // edi@3
  signed int result; // eax@8
  _DWORD *v7; // eax@9
  _DWORD *v8; // eax@10
  _DWORD *v9; // eax@11
  FILE *v10; // eax@5
  int v11; // [sp+0h] [bp-3Ch]@10
  int *v12; // [sp+8h] [bp-34h]@5
  int v13; // [sp+Ch] [bp-30h]@5
  signed int (__cdecl *v14)(int); // [sp+14h] [bp-28h]@9
  int v15; // [sp+18h] [bp-24h]@9
  int v16; // [sp+1Ch] [bp-20h]@10

  if ( a2 )
  {
    if ( *a1 != 1 )
    {
      v2 = sub_6F8B3630((int)a1);
      v3 = (volatile signed __int32 *)((char *)v2 + 4);
      v4 = (int)v2;
      sub_6F8B2F50((volatile signed __int32 *)v2 + 1);
      v5 = *a1;
      if ( *a1 )
      {
        if ( v5 != 1 )
        {
          v10 = (FILE *)off_6FB48ABC(2);
          v13 = v5;
          v12 = a1;
          fprintf(v10, " once %p is %d\n", a1, v5);
        }
      }
      else
      {
        v14 = sub_6F8B3B10;
        v15 = v4;
        v7 = sub_6F8B3D30();
        if ( !v7 )
          BUG();
        v16 = v7[3];
        _InterlockedOr((volatile signed __int32 *)&v11, 0);
        v8 = sub_6F8B3D30();
        if ( !v8 )
        {
          v0 = &v14;
          BUG();
        }
        v8[3] = &v14;
        _InterlockedOr((volatile signed __int32 *)&v11, 0);
        a2();
        v9 = sub_6F8B3D30();
        if ( !v9 )
        {
          v0 = v16;
          BUG();
        }
        v9[3] = v16;
        *a1 = 1;
      }
      sub_6F8B3270(v3);
      if ( v4 )
        sub_6F8B3A50(v4);
    }
    result = 0;
  }
  else
  {
    result = 22;
  }
  return result;
}

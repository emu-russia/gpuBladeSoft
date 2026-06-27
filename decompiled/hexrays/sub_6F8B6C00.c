signed int __cdecl sub_6F8B6C00(int *a1)
{
  signed int result; // eax@1
  int v2; // ebx@2
  int v3; // esi@2
  int v4; // ecx@4
  int v5; // eax@4
  signed int v6; // eax@11
  int v7; // [sp+0h] [bp-4Ch]@9
  int v8; // [sp+1Ch] [bp-30h]@12
  signed int (__cdecl *v9)(int); // [sp+24h] [bp-28h]@9
  int v10; // [sp+28h] [bp-24h]@9
  int v11; // [sp+2Ch] [bp-20h]@9

  result = sub_6F8B6750(a1);
  if ( !result )
  {
    v2 = *a1;
    v3 = sub_6F8B63B0(*a1);
    if ( !v3 )
    {
      if ( !*(_DWORD *)(v2 + 8) )
      {
        v4 = *(_DWORD *)(v2 + 16);
        v5 = *(_DWORD *)(v2 + 12);
        if ( v4 > 0 )
        {
          v5 -= v4;
          *(_DWORD *)(v2 + 16) = 0;
          *(_DWORD *)(v2 + 12) = v5;
        }
        if ( v5 > 0 )
        {
          v9 = sub_6F8B6450;
          *(_DWORD *)(v2 + 16) = -v5;
          v10 = v2;
          v11 = *(_DWORD *)sub_6F8B4AF0();
          _InterlockedOr((volatile signed __int32 *)&v7, 0);
          *(_DWORD *)sub_6F8B4AF0() = &v9;
          _InterlockedOr((volatile signed __int32 *)&v7, 0);
          do
          {
            v6 = sub_6F8B2910((int *)(v2 + 28), v2 + 24);
            if ( v6 )
            {
              v8 = v6;
              *(_DWORD *)sub_6F8B4AF0() = v11;
              v9(v10);
              v3 = v8;
              goto LABEL_8;
            }
          }
          while ( *(_DWORD *)(v2 + 16) < 0 );
          *(_DWORD *)sub_6F8B4AF0() = v11;
          *(_DWORD *)(v2 + 12) = 0;
        }
      }
      _InterlockedAdd((volatile signed __int32 *)(v2 + 8), 1u);
    }
LABEL_8:
    result = sub_6F8B6470((int)a1, v3);
  }
  return result;
}

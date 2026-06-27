int __cdecl sub_6F90F380(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, char a10)
{
  int result; // eax@2

  switch ( (unsigned __int8)(a10 - 100) )
  {
    case 0u:
      result = (*(int (__stdcall **)(int, int, int, int, int, int, int))(*(_DWORD *)a2 + 16))(
                 a3,
                 a4,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9);
      break;
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x11u:
    case 0x12u:
    case 0x14u:
    case 0x15u:
      result = (*(int (__stdcall **)(int, int, int, int, int, int, int))(*(_DWORD *)a2 + 28))(
                 a3,
                 a4,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9);
      break;
    case 9u:
      result = (*(int (__stdcall **)(int, int, int, int, int, int, int))(*(_DWORD *)a2 + 24))(
                 a3,
                 a4,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9);
      break;
    case 0x10u:
      result = (*(int (__stdcall **)(int, int, int, int, int, int, int))(*(_DWORD *)a2 + 12))(
                 a3,
                 a4,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9);
      break;
    case 0x13u:
      result = (*(int (__stdcall **)(int, int, int, int, int, int, int))(*(_DWORD *)a2 + 20))(
                 a3,
                 a4,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9);
      break;
  }
  return result;
}

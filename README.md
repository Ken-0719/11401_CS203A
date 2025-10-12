# 11401_CS203A
## Student name/ID
- 1131406黃博彥

## Course information
- Course Title: Data Structures
- Course Code: CS203A
- Semester: 11401
- Credits: 3
- Instructor: Yu-Feng Huang
- Course Time(Classroom): Monday 09:10–10:00 (R60104); Tuesday 15:10–17:00 (R1102)
- Contact: Yu-Feng Huang
- Teaching Assistant: To be announced
- Office Hours: Monday 14:00-16:00; Wednesday 14:00–16:00

## Repository description







---
  *把上課學到的東西記錄在這裡*

---
## 9/4
這份筆記紀錄統整了資料結構的基礎概念、C 語言程式設計的核心要素，以及資料結構在現實世界中的應用情境，並附帶相關解釋。

---

## 筆記紀錄：資料結構與 C 程式設計核心

### I. C 程式設計的核心：記憶體、指標與結構

這部分內容被稱為「C 程式設計的核心」(THE KERNEL OF PROGRAMMING IN C)，是理解動態資料結構的基礎。

| 關鍵內容 (Key Content) | 解釋與細節 (Explanation and Details) | 引用 |
| :--- | :--- | :--- |
| **記憶體管理責任** | 在 C 語言中，程式設計師**負責記憶體的分配和釋放**（例如使用 `malloc` 和 `free`）。記憶體直接從作業系統 (OS) 請求，且**沒有自動垃圾回收機制** (automatic garbage collection)。 | |
| **控制與效率** | 這種對記憶體的直接控制提供了程式的效率和可預測性。然而，這也意味著程式設計師必須承擔全部的責任。 | |
| **記憶體的用途** | 所有程式資料都必須儲存在記憶體中才能被處理。記憶體儲存的內容包括變數（純量、陣列、結構）、資料結構（連結串列、樹、圖）和暫存緩衝區。 | |
| **指標的定義** | **指標 (Pointer) 儲存了變數或物件的記憶體位址**。 | |
| **指標的重要性** | 指標對於以下方面至關重要：1. **動態記憶體**的存取；2. **資料結構**（如連結串列、樹、圖）中連結節點；3. 函式參數的**傳址呼叫** (pass-by-reference)，用以修改原始資料；4. 與硬體及作業系統的低階介面互動。 | |
| **指標的風險** | 指標賦予對記憶體的直接控制權，但需要**仔細處理**以避免發生記憶體洩漏 (leaks) 和程式崩潰 (crashes)。指標是動態資料結構的**基礎** (backbone)。 | |
| **結構 (Struct) 的作用** | Struct 將多個相關的變數（可能屬於不同類型）分組成一個**單一的複合類型**。 | |
| **結構的優勢** | Struct 比陣列更靈活，適用於建模**真實世界的實體**（例如學生記錄 `Student`）。它有助於設計同時包含資料和關係（透過指標）的資料結構。 | |
| **底層基礎** | 資料結構是建立在記憶體操作之上的，瞭解記憶體如何分配、存取和釋放是基礎。理解記憶體佈局有助於掌握效能考量，如快取友善性 (cache-friendliness) 和記憶體區域性 (memory locality)。 | |

---

### II. 資料結構的基礎概念（5W1H 方法論）

資料結構是高效能運算的關鍵。使用 5W1H 方法論有助於理解資料結構的背景和用途。

#### 1. What (是什麼)：定義與分類

*   **定義：** 資料結構是一種有效率地**組織、儲存和管理資料**的方式。
*   **分類：** 資料結構主要分為以下幾類：
    *   **線性 (Linear)：** 陣列 (Array)、連結串列 (Linked List)、堆疊 (Stack)、佇列 (Queue)。
    *   **非線性 (Non-linear)：** 樹 (Tree)、圖 (Graph)。
    *   **雜湊基礎 (Hash-based)：** 雜湊表 (Hash Table)。
    *   **專業化 (Specialized)：** 堆積 (Heap)、Trie、Bloom Filter。

#### 2. Why (為什麼)：目的與重要性

*   **效率：** 提高資料管理和檢索的效率。
*   **優化：** 改善演算法的性能，減少時間複雜度 (time complexity) 和記憶體用量。
*   **實務影響：** 帶來速度、可擴展性 (scalability) 和可維護性方面的實質影響。

#### 3. When & Where (何時何地)：應用場景與領域

資料結構的應用非常廣泛，貫穿各個領域。

| 使用時機 (Usage Scenarios) | 應用領域 (Application Domains) | 範例結構 | 引用 |
| :--- | :--- | :--- | :--- |
| **快速查找**的需求 (Fast lookups) | Web 系統 (Caching sessions) | 雜湊表 (Hash Tables) | |
| **複雜關係建模**的需求 | 社交網路 (Social networks) | 圖 (Graph) | |
| **大規模資料儲存** | 資料庫 (Indexing) | 樹 (Trees, B-Trees) | |
| **即時應用** (Real-time applications) | 作業系統 (Process scheduling queues) | 佇列 (Queue) | |
| **層次結構表示** | 檔案系統 (Directories) | 樹結構 (Tree structure) | |

#### 4. How (如何)：實作與選擇標準

*   **實作方式：** 實作資料結構需要使用程式語言（如 C, C++, Java, Python），並涉及**記憶體分配和指標**。
*   **選擇標準：** 選擇合適的資料結構需要考量：
    1.  資料存取模式 (Data access pattern)。
    2.  所需的性能（時間和空間）。
    3.  複雜度分析 (Complexity analysis, Big-O)。
    4.  例如，針對插入操作，需比較陣列 (Array) 與連結串列 (Linked List) 的差異。

---

### III. 資料結構的應用情境 (User Scenarios)

這些情境展示了不同的資料結構和演算法在現實生活中的應用。

| 情境編號 (Scenario) | 描述 (Description) | 隱含的資料結構/概念 (Implied DS/Concept) | 引用 |
| :--- | :--- | :--- | :--- |
| **情境 I：學生排隊** | 國小一年級學生按身高升序或降序排列。延伸情境涉及學生的多維資訊（ID, 年齡, 分數等）。 | 排序演算法 (Sorting Algorithms)；結構體 (Struct) 或陣列/串列 (Array/List) 儲存資料。 | |
| **情境 II：售票窗口** | 台北動物園擁有多個售票窗口 (1, 2, 4, 8個)。 | 佇列 (Queue) 處理隊列中的顧客；排程或並行處理。 | |
| **情境 III & IV：地圖與博物館** | Google 地圖導航 (起點到終點)；巴黎博物館通行證：博物館是**頂點 (vertex/node)**，博物館之間的路線是**邊 (edge/link/line)**。 | **圖 (Graph) 資料結構**，用於建模連接和路徑查找（例如，最短路徑演算法）。 | |
| **情境 V：檔案系統** | Linux 檔案系統或 Windows 檔案總管。 | **樹結構 (Tree Structure)**：用於表示文件和目錄的層次關係。它同時需要儲存元數據 (metadata) 和層次關係。 | |
| **情境 VI：矩陣計算** | 執行矩陣 A 乘以矩陣 B 的運算。 | **二維陣列 (2D Array) 或矩陣 (Matrix)**：用於儲存和操作多維度的數據集。 | |

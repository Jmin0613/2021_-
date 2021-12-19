
namespace F021_PhoneBook
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.listBox1 = new System.Windows.Forms.ListBox();
            this.label1 = new System.Windows.Forms.Label();
            this.txtID = new System.Windows.Forms.TextBox();
            this.btnViewAll = new System.Windows.Forms.Button();
            this.btnInsert = new System.Windows.Forms.Button();
            this.txtSId = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.btnSearch = new System.Windows.Forms.Button();
            this.txtSName = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.btnClear = new System.Windows.Forms.Button();
            this.txtPhone = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.btnQuit = new System.Windows.Forms.Button();
            this.btnUpdata = new System.Windows.Forms.Button();
            this.btnDelete = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // listBox1
            // 
            this.listBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.listBox1.FormattingEnabled = true;
            this.listBox1.ItemHeight = 20;
            this.listBox1.Location = new System.Drawing.Point(25, 21);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(466, 204);
            this.listBox1.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.label1.Location = new System.Drawing.Point(21, 250);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(26, 20);
            this.label1.TabIndex = 1;
            this.label1.Text = "ID";
            // 
            // txtID
            // 
            this.txtID.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.txtID.Location = new System.Drawing.Point(90, 245);
            this.txtID.Name = "txtID";
            this.txtID.Size = new System.Drawing.Size(121, 26);
            this.txtID.TabIndex = 2;
            // 
            // btnViewAll
            // 
            this.btnViewAll.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.btnViewAll.Location = new System.Drawing.Point(235, 245);
            this.btnViewAll.Name = "btnViewAll";
            this.btnViewAll.Size = new System.Drawing.Size(120, 24);
            this.btnViewAll.TabIndex = 3;
            this.btnViewAll.Text = "View All";
            this.btnViewAll.UseVisualStyleBackColor = true;
            // 
            // btnInsert
            // 
            this.btnInsert.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.btnInsert.Location = new System.Drawing.Point(235, 293);
            this.btnInsert.Name = "btnInsert";
            this.btnInsert.Size = new System.Drawing.Size(120, 24);
            this.btnInsert.TabIndex = 6;
            this.btnInsert.Text = "추가";
            this.btnInsert.UseVisualStyleBackColor = true;
            // 
            // txtSId
            // 
            this.txtSId.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.txtSId.Location = new System.Drawing.Point(90, 293);
            this.txtSId.Name = "txtSId";
            this.txtSId.Size = new System.Drawing.Size(121, 26);
            this.txtSId.TabIndex = 5;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.label2.Location = new System.Drawing.Point(21, 298);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(33, 20);
            this.label2.TabIndex = 4;
            this.label2.Text = "학번";
            // 
            // btnSearch
            // 
            this.btnSearch.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.btnSearch.Location = new System.Drawing.Point(235, 342);
            this.btnSearch.Name = "btnSearch";
            this.btnSearch.Size = new System.Drawing.Size(120, 24);
            this.btnSearch.TabIndex = 9;
            this.btnSearch.Text = "검색";
            this.btnSearch.UseVisualStyleBackColor = true;
            // 
            // txtSName
            // 
            this.txtSName.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.txtSName.Location = new System.Drawing.Point(90, 342);
            this.txtSName.Name = "txtSName";
            this.txtSName.Size = new System.Drawing.Size(121, 26);
            this.txtSName.TabIndex = 8;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.label3.Location = new System.Drawing.Point(21, 347);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(33, 20);
            this.label3.TabIndex = 7;
            this.label3.Text = "이름";
            // 
            // btnClear
            // 
            this.btnClear.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.btnClear.Location = new System.Drawing.Point(235, 385);
            this.btnClear.Name = "btnClear";
            this.btnClear.Size = new System.Drawing.Size(120, 24);
            this.btnClear.TabIndex = 12;
            this.btnClear.Text = "Clear";
            this.btnClear.UseVisualStyleBackColor = true;
            // 
            // txtPhone
            // 
            this.txtPhone.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.txtPhone.Location = new System.Drawing.Point(90, 385);
            this.txtPhone.Name = "txtPhone";
            this.txtPhone.Size = new System.Drawing.Size(121, 26);
            this.txtPhone.TabIndex = 11;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.label4.Location = new System.Drawing.Point(21, 390);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(57, 20);
            this.label4.TabIndex = 10;
            this.label4.Text = "전화번호";
            // 
            // btnQuit
            // 
            this.btnQuit.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.btnQuit.Location = new System.Drawing.Point(371, 385);
            this.btnQuit.Name = "btnQuit";
            this.btnQuit.Size = new System.Drawing.Size(120, 24);
            this.btnQuit.TabIndex = 15;
            this.btnQuit.Text = "종료";
            this.btnQuit.UseVisualStyleBackColor = true;
            // 
            // btnUpdata
            // 
            this.btnUpdata.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.btnUpdata.Location = new System.Drawing.Point(371, 342);
            this.btnUpdata.Name = "btnUpdata";
            this.btnUpdata.Size = new System.Drawing.Size(120, 24);
            this.btnUpdata.TabIndex = 14;
            this.btnUpdata.Text = "수정";
            this.btnUpdata.UseVisualStyleBackColor = true;
            // 
            // btnDelete
            // 
            this.btnDelete.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.btnDelete.Location = new System.Drawing.Point(371, 293);
            this.btnDelete.Name = "btnDelete";
            this.btnDelete.Size = new System.Drawing.Size(120, 24);
            this.btnDelete.TabIndex = 13;
            this.btnDelete.Text = "삭제";
            this.btnDelete.UseVisualStyleBackColor = true;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(514, 450);
            this.Controls.Add(this.btnQuit);
            this.Controls.Add(this.btnUpdata);
            this.Controls.Add(this.btnDelete);
            this.Controls.Add(this.btnClear);
            this.Controls.Add(this.txtPhone);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.btnSearch);
            this.Controls.Add(this.txtSName);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.btnInsert);
            this.Controls.Add(this.txtSId);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.btnViewAll);
            this.Controls.Add(this.txtID);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.listBox1);
            this.Name = "Form1";
            this.Text = "전화번호부";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ListBox listBox1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtID;
        private System.Windows.Forms.Button btnViewAll;
        private System.Windows.Forms.Button btnInsert;
        private System.Windows.Forms.TextBox txtSId;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button btnSearch;
        private System.Windows.Forms.TextBox txtSName;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button btnClear;
        private System.Windows.Forms.TextBox txtPhone;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Button btnQuit;
        private System.Windows.Forms.Button btnUpdata;
        private System.Windows.Forms.Button btnDelete;
    }
}

